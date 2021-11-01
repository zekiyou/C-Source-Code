#include <stdio.h>
#include <malloc.h>

int* f(){
    int b=5;
    return &b;
}

int main()
{
    int* p=123456;
    //错误的类型转换，p指针指向无效地址

    int* p2;
    //局部指针变量没有初始化，p2指向无效地址

    int* p3=(int*)malloc(sizeof(int));
    free(p3);
    //使用了已经释放的指针，p3指向无效地址

    int a=3;
    int* p4=&a;

    p4=p4+5;
    //错误的指针运算，p4指向无效地址，操作越界

    int* p5=f();
    //返回局部变量的地址，f函数的局部变量的空间在返回后被销毁


    printf("%d\n",*p2);

    return 0;
}
