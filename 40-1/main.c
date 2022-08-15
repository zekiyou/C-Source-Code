#include<stdio.h>

int main(int argc, char *argv[])
{
    int a;
    //局部变量,栈上分配空间 程序运行才存在
    static int b;
    //未初始化的static局部变量 .bss段
    static int c=1;
    //已初始化的static局部变量 .data段
    int* p=(int*)malloc(sizeof(int));
    //malloc申请的堆空间，堆上分配空间 程序运行才存在


    printf("0x%p\n",&a);

    printf("0x%p\n",&c);

    printf("0x%p\n",&b);

    printf("0x%p\n",&p);


    return 0;
}
