#include <stdio.h>

int main()
{
    unsigned int j=5;
    int i=-10;                   //有符号数-10以补码形式内存中表示 -10=>1111 1111 1111 1111 1111 1111 1111 0110
    if(i+j>0)
        printf("i+j>0\n");       //无符号数与有符号数混合运算 有符号数转为无符号数参与计算 -10成为一个正数
    else
        printf("i+j<0\n");
    return 0;
}
