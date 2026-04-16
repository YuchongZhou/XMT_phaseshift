%清除变量   matlab 严格区分大小写，这里需要特别的注意
sr3 = serial('COM1');       % 使用默认设置创建串口sr3  根据时间情况来选择串口
sr3.BaudRate=9600;
%sr3.BaudRate=115200;       %这个波特率 为115200 根据下位机的 不同而定
% fclose(sr3);                %关闭串口 
 fopen(sr3);                 %打开串口  
%做发送数据前的准备工作
Send1='aa';%起始字节(B0)
Send2='01';%地址(B1)
Send3='14';%包长(B2)
Send4='0c';%指令码1(B3) 
Send5='00';%指令码2(B4)
Send6='00';%通道数 1路'0' 二路'1' 三路 '2'
% Send7='0';%发送数据 模拟数据
% Send8='0a';%发送数据 模拟数据
% Send9='0';%发送数据 模拟数据 
% Send10='0a';%发送数据 模拟数据
b={Send1 Send2 Send3 Send4 Send5 Send6};
bInt=hex2dec(b);

m_ffeng=50;%发送的数据
m_plv=1;
m_pzhi=25;
m_wavetype='46'; % 波类型:'Z':正弦波,'F':方波,'S':三角波,'J':锯齿波
%    发送波形对应的码字 依照码字来 发送不同的波形
%   'Z' 0x5a 正弦波
% 	'F'	0x46 方波
% 	'S'	0x53 三角波
% 	'J'	0x4a 锯齿波
whos;
bInt(7)= hex2dec(m_wavetype);
[bInt(8),bInt(9),bInt(10),bInt(11)]=floatTFourChar(m_ffeng);%调用发送数据的编码数据
[bInt(12),bInt(13),bInt(14),bInt(15)]=floatTFourChar(m_plv);%调用发送数据的编码数据
[bInt(16),bInt(17),bInt(18),bInt(19)]=floatTFourChar(m_pzhi);%调用发送数据的编码数据


tmpdata1 = uint8(0);
% tmpdata1 =  bitxor(tmpdata1,Send(7),'Uint8');
%whos;
%将数据抑或 取得抑或位 加入到发送序列中 待发送
for i=1:19
tmpdata1  = bitxor(tmpdata1,uint8(bInt(i)),'uint8');
f(i)=tmpdata1;%查看每位的抑或位
a1='fe';%查看数据位
end  
bInt(20)=tmpdata1;  %抑或校验位

%发送数据 
fwrite(sr3, bInt, 'uint8');%清除变量                                                              
%str = fscanf(sr3)           %读取串口数据（无分号，可在Matlab工作区实时查看）

fclose(sr3);                %关闭串口 
delete(sr3);  
clear sr3; 

