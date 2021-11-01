#include <stdio.h>

int main()
{
    short s=0x1122;
    int i=(int) s;
    //强制类型转换 目标类型能容纳 结果不变
    char c=(char) s;
    //强制类型转换 目标类型不能容纳目标值 截断 高位舍弃 低位保留
    printf("0x%x\n",i);
    printf("0x%x\n",c);
    //强制类型转换由程序员主动进行

    char c1=s;
    //复制表达式中 隐式类型转换 转换为左边类型 目标类型不能容纳目标值 截断 高位舍弃 低位保留
    printf("0x%x\n",c1);

    char c2='a';
    int j=100;
    printf("%d\n",sizeof(c2+j));
    //算数运算中 隐式类型转换 低类型(char)转换为(int) 参与计算



    //隐式类型转换由编译器进行发生的情况:
    //1.算术表达式
    //2.赋值表达式
    //3.函数调用
    //4.函数返回值



    return 0;
}
