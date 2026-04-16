%清除变量   matlab 严格区分大小写，这里需要特别的注意
sr3 = serial('COM5');       % 使用默认设置创建串口sr3  根据时间情况来选择串口
sr3.BaudRate=9600;
%sr3.BaudRate=115200;       %这个波特率 为115200 根据下位机的 不同而定
% fclose(sr3);                %关闭串口 
 fopen(sr3);                 %打开串口  
%做发送数据前的准备工作
Send1='aa';%起始字节(B0)
Send2='01';%地址(B1)

Send3='1c';%包长(B2) 等于 7+（发送点个数）*2+1
           %假设发送10个点 那么 包长为 7+10*2+1=28
Send4='46';%指令码1(B3) 
Send5='00';%指令码2(B4)
Send6='00';%通道数 1路'0' 二路'1' 三路 '2'
Send7 ='00';%00 表示前96个点 01表示后96个点
b={Send1 Send2 Send3 Send4 Send5 Send6 Send7};
bInt=hex2dec(b);
%假设发送10个数据
SendDataArr = [10.001,20.002,30.003,40.004,50.005,60.006,70.007,80.008,90.009,100.010];%计划发送的数据
%SendDataArr = [10.001,10.001,10.001,10.001,10.001,10.001,10.001,10.001,10.001,10.001];%计划发送的数据
%float TmpMaxData;  %发送的最大数据值 例如电压150伏特 如果是闭环就填入最大位移例如 10微米
%float TmpMminData; %发送的最大数据值 例如电压0伏特 如果是闭环就填入最大位移例如 0微米
TmpMaxData= 120;%系统最大电压值 如果要是闭环需要填写最大的位移数据值
TmpMminData = 0;%系统最小电压值 如果要是闭环需要填写最大小的位移数据值
% matlab 严格区分大小写，这里需要特别的注意
% TmpDa_1 表示高位
% TmpDa_2 表示低位
%function [TmpDa_1,TmpDa_2]  = ChangeDataToDa(SendData,TmpMaxData,TmpMinData) %将浮点数 转化为两个[0] 代表高字节 先发送 [1]代表低字节后发送    

[bInt(8),bInt(9)]=ChangeDataToDa(SendDataArr(1),TmpMaxData,TmpMminData);%讲要发送的浮点数按照事先预定来处理数据
%[bInt(10),bInt(11)]=ChangeDataToDa(SendDataArr                                                                                                                                                    (2),TmpMaxData,TmpMminData);
for j=1:1:9  
    [bInt(j*2+8),bInt(j*2+9)]=ChangeDataToDa(SendDataArr(j),TmpMaxData,TmpMminData);
end
whos;
tmpdata1 = uint8(0);
% tmpdata1 =  bitxor(tmpdata1,Send(7),'Uint8');
% whos;
%将数据抑或 取得抑或位 加入到发送序列中 待发送
for i=1:27
tmpdata1  = bitxor(tmpdata1,uint8(bInt(i)),'uint8');
f(i)=tmpdata1;%查看每位的抑或位
a1='fe';%查看数据位
end  
bInt(28)=tmpdata1;  %抑或校验位

%发送数据 
fwrite(sr3, bInt, 'uint8');%清除变量                                                              
%str = fscanf(sr3)           %读取串口数据（无分号，可在Matlab工作区实时查看）

fclose(sr3);                %关闭串口 
delete(sr3);  
clear sr3; 

