#include <stdio.h>

int main()
{
    int i=3;
    int* p=&i;

    printf("%d,%p\n",i,&i);
    printf("%d,%p\n",*p,p);

    //指针是存储内存地址的变量
    //指针使用时，*用于取指针指向内存中的值

    return 0;
}
