% 函数目的 将浮点数转化为 4个char类型的数据 以备向串口中发送数据;
% matlab 严格区分大小写，这里需要特别的注意
function [a1,a2,a3,a4] = floatTFourChar(a)  % 多返回值（用中括号括起来就可以实现多返回值）
     %a = b;
    tmpData='80';
  %   bAnd = hex2dec(tmpData);
  %   bAnd=ones(1,'uint8')
     bAnd = uint8(128);
     kk=ones(1,'uint8');
     whos;
     if a<0
         a = a*-1.0;
         zhengshu = floor(a);%处理整数部分的
         xiaoshu = a-zhengshu;%处理的小数部分的
         kk(1) = floor(zhengshu/256);%高位
         kk(2) = rem(zhengshu,256);%低位
         xiaoshu = xiaoshu*10000;%缩小10000倍
         kk(3) = floor(xiaoshu/256);%高位
         kk(4) = rem(xiaoshu,256);%低位
         
         kk(1) = bitor(kk(1),bAnd,'uint8') ;%负数 最高位 置1用于做负数表示
         a1 = uint8(kk(1)) ;
         a2 = uint8(kk(2)) ;
         a3 = uint8(kk(3)) ;
         a4 = uint8(kk(4)) ;
     else
  
         zhengshu = floor(a);%处理整数部分的
         xiaoshu = a-zhengshu;%处理的小数部分的
         kk(1) = floor(zhengshu/256);%高位
         kk(2) = rem(zhengshu,256);%低位
         xiaoshu = xiaoshu*10000;%缩小10000倍
         kk(3) = floor(xiaoshu/256);%高位
         kk(4) = rem(xiaoshu,256);%低位
         a1 = uint8(kk(1)) ;
         a2 = uint8(kk(2)) ;
         a3 = uint8(kk(3)) ;
         a4 = uint8(kk(4)) ;
     end
end
