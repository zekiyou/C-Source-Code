#include <stdio.h>

extern int c;
//extern 关键字修饰变量表明变量c在其他地方定义
extern int b;
extern int getI();
//extern 关键字修饰函数表明函数在其他地方定义
extern int GetI();
int main()
{
    printf("%d",c);
    printf("%d",b);
    //b全局变量被static修饰，使得全局变量b只在声明的test.c起作用 error

    printf("%d",getI());
    //getI函数被static修饰，使得getI()只在声明的test.c起作用 error
    printf("%d",GetI());


    return 0;
}


