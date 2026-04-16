% 函数目的 将浮点数转化为 4个char类型的数据 以备向串口中发送数据;
% matlab 严格区分大小写，这里需要特别的注意
function [rData] = FourCharTfloat(kk1,kk2,kk3,kk4)  % 多返回值（用中括号括起来就可以实现多返回值）
    double d;
    tmpData='80';
    bAnd = hex2dec(tmpData); 
   % D0 = ones(1,'int16');
  %  D1 = ones(1,'int16');
    % kk1=0;%80代表 负数
    % kk2=10;
    % kk3=0;
    % kk4=10;
    flagZShu = bitand(bAnd,kk1,'uint8');%正数以及负数的判断
    if(flagZShu==0)%表示正数

        D0 = 256*int16(kk1)+int16(kk2);%整数部分
        D1 = 256*int16(kk3)+int16(kk4);%小数部分
        a = double(D0);
        b = double(D1);
        rData = a+b*0.0001;

    else
        kk1=kk1 - bAnd;
        D0 = 256*int16(kk1)+int16(kk2);%整数部分
        D1 = 256*int16(kk3)+int16(kk4);%小数部分
        a = double(D0);
        b = double(D1); 
        rData = (a+b*0.0001)*-1.0;    
        
    end
    whos;

end

