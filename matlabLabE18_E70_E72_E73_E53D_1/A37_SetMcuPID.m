%清除变量   matlab 严格区分大小写，这里需要特别的注意
sr3 = serial('COM5');       % 使用默认设置创建串口sr3  根据时间情况来选择串口
sr3.BaudRate=9600;
%sr3.BaudRate=115200;       %这个波特率 为115200 根据下位机的 不同而定
% fclose(sr3);                %关闭串口 
 fopen(sr3);                 %打开串口  
%做发送数据前的准备工作
Send1='aa';%起始字节(B0)
Send2='01';%地址(B1)
Send3='13';%包长(B2)
Send4='25';%指令码1(B3) 
Send5='00';%指令码2(B4)
Send6='00';%通道数 1路'0' 二路'1' 三路 '2'
% Send7='0';%发送数据 模拟数据
% Send8='0a';%发送数据 模拟数据
% Send9='0';%发送数据 模拟数据 
% Send10='0a';%发送数据 模拟数据
b={Send1 Send2 Send3 Send4 Send5 Send6};
bInt=hex2dec(b);

m_PID_P_P =0.1;%实验数据根据不同的系统 填入不同的PID的数据值
m_PID_P_I=0.2;
m_PID_P_D=0.3;
whos;
[bInt(7),bInt(8),bInt(9),bInt(10)]=floatTFourChar(m_PID_P_P);%调用发送数据的编码数据
[bInt(11),bInt(12),bInt(13),bInt(14)]=floatTFourChar(m_PID_P_I);%调用发送数据的编码数据
[bInt(15),bInt(16),bInt(17),bInt(18)]=floatTFourChar(m_PID_P_D);%调用发送数据的编码数据

tmpdata1 = uint8(0);
% tmpdata1 =  bitxor(tmpdata1,Send(7),'Uint8');
%whos;
%将数据抑或 取得抑或位 加入到发送序列中 待发送
for i=1:18
tmpdata1  = bitxor(tmpdata1,uint8(bInt(i)),'uint8');
f(i)=tmpdata1;%查看每位的抑或位
a1='fe';%查看数据位
end  
bInt(19)=tmpdata1;  %抑或校验位

%发送数据 
fwrite(sr3, bInt, 'uint8');%清除变量                                                              
%str = fscanf(sr3)           %读取串口数据（无分号，可在Matlab工作区实时查看）

fclose(sr3);                %关闭串口 
delete(sr3);  
clear sr3; 

