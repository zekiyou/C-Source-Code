#include <stdio.h>

int f(int a,int b);
//f的声明

int main()
{
    extern int a;
    //a的声明
    printf("%d",a);
    return 0;
}
