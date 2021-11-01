#include <stdio.h>

int main()
{
    volatile int a;
    //volatile 作为编译器警告字 防止编译器对a进行优化
    //让a变量每次使用 都在内存中取值 适用于多线程程序

    printf("Hello World!\n");
    return 0;
}
