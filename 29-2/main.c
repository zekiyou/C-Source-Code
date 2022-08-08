#include <stdio.h>

void f1(char a[5]){
    printf("sizeof(a)=%d\n",sizeof(a));
    //可以看到被退化成了 char*指针 值为4
    *a='a';
    a=NULL;
    //数组名也是不能赋值的 退化为指针可以
}

void f2(char a[10]){
    *a='c';
    a=NULL;
}


//数组作为函数参数，编译时会退化为指针，丢失长度信息

int main()
{
    char a[3];

    f1(a);
    printf("%c",a[0]);
    //  作为指针参数进行函数 可以改变实参

    f2(a);
    printf("%c",a[0]);

    return 0;
}
