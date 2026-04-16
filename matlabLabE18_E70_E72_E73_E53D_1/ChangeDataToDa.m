%发送数据转换 浮点数转化为DA(0-65535)之间转换
% matlab 严格区分大小写，这里需要特别的注意
% TmpDa_1 表示高位
% TmpDa_2 表示低位
function [TmpDa_1,TmpDa_2]  = ChangeDataToDa(SendData,MaxData,MinData) %将浮点数 转化为两个[0] 代表高字节 先发送 [1]代表低字节后发送    
    %float TmpSendData;
    %float MaxData;
   % float MinData;
    %赋值过程
%     TmpSendData = SendData;
%     MaxData=TmpMaxData;
%     MinData=TmpMinData;
    kk=ones(1,'uint8');
    tmpSendData_int = ones(1,'uint16');
	%unit16  tmpSendData_int;
    tmpSendData = (SendData/((MaxData-MinData)*1.0))*32768+32767;
    tmpSendData_int(1) = floor(tmpSendData);
    tmpFloat = tmpSendData/256;
	kk(1) = floor(tmpFloat); %//高字节
    kk(2) = rem(tmpSendData_int(1),256);%//低字节
    whos;
    TmpDa_1 = kk(1);
    TmpDa_2 = kk(2);
end

% round(a):四舍五入，比如：round(pi)=3
% ceil(a):向上取整，比如：ceil(pi)=4
% floor(a):向下取整，比如：floor(pi)=3

% 备注：下位机每通道最多存储192个单点电压值，存储电压值为DA发送值,范围0-65535，
% 2个字节代表一个电压值。上位机发送数据范围为0-65535，32767代表电压0V, 
% 65535为最大电压，0代最小电压（负电压），发送时,两个字节数据为一个单点值。
% 高字节先发，低字节后发。
% 上位机需要区分要发送的存储数据为开环电压还是闭环位移值，判断后，转化为实际DA发送值，
% 发送给下位机存储使用。发送一次命令最大发送96单点电压值(192个字节)。
% 如果一次发送超过96个点需要分两次发送。

