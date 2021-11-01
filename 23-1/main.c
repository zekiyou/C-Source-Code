#include <stdio.h>

#define C -1

#if C==-1
    #error C value is error.
    //#error用于程序员自定义一个编译错误信息 来控制编译 产生错误信息则编译失败
#endif
#ifndef C
    #warning C value is not defined.
    //#warning用于程序员自定义一个编译警告信息 产生警告依然产生可执行程序
#endif

int main()
{
    return 0;
}
