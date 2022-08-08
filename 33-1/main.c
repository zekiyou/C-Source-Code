#include <stdio.h>

int main(int argc, char *argv[])
//操作系统调用main函数作为程序的开始
{
	int i;
    for(i=0;i<argc;i++)
        printf("%s\n",argv[i]);
    //程序通过main的参数传递命令行信息与环境变量信息
    return 99;
    //return返回值作为程序的退出状态
}

