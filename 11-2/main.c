#include <stdio.h>

int f1(){
    printf("f1()被执行");
    return 0;
}

int main()
{
    int var=0;
    int size=sizeof(var++);
    //sizeof在编译过程中，已被具体数值替换
    //在编译过程中，sizeof()直接被替换成4,var++失效
    printf("var=%d,size=%d",var,size);

    size=sizeof(f1());
    //f1()并没有运行,sizeof与程序的运行无关
    //sizeof()在编译期间直接被换成4
    //size=4;
    return 0;
}
