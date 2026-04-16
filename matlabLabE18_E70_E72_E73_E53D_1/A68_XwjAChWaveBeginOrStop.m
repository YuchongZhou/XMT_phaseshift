%清除变量  matlab 严格区分大小写，这里需要特别的注意
sr3 = serial('COM5');       % 使用默认设置创建串口sr3  根据时间情况来选择串口
sr3.BaudRate=9600;
%sr3.BaudRate=115200;
sr3.Timeout = 1;%读取等待时间1s
% fclose(sr3);                %关闭串口 
  fopen(sr3);                 %打开串口  

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Send1='aa';%起始字节(B0)
Send2='01';%地址(B1)
Send3='08';%包长(B2)
Send4='44';%指令码1(B3) 
Send5='00';%指令码2(B4)
Send6='00';%通道数 1路'00' 二路'01' 三路 '02'
Send7='53';% 0x53 'S'表示开始 ， 0x54 'T'表示停止

b={Send1 Send2 Send3 Send4 Send5 Send6 Send7};
bInt=hex2dec(b);
tmpdata1 = uint8(0);
%whos;
%将数据抑或 取得抑或位 加入到发送序列中 待发送
for i=1:7
tmpdata1  = bitxor(tmpdata1,uint8(bInt(i)),'uint8' );
f(i)=tmpdata1;%查看每位的抑或位
a1='fe';%查看数据位
end  

bInt(8)=tmpdata1;  %抑或校验位
%发送数据 读取电压命令 同时 同时显示电压的数据
numPoint = 100;
        
fwrite(sr3, bInt, 'uint8');%发送读取命令                                                            

whos;
fclose(sr3);                %关闭串口 
delete(sr3);  
clear sr3; 

