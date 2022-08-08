#include <stdio.h>

typedef void i3(void);
//函数类型 由返回类型，参数列表确定，通过typedef重命名

i3 f;


void f(void){
    printf("test");
}

int main()
{
    i3* p;
    //也可写作 void (*p)(void);
    p=f;
    //函数的函数名值为函数的入口地址

    p();
    //通过函数地址，调用函数

    printf("%p\n",f);

    p=0x0000000000401530;
    //利用函数指针，从指定地址开始执行函数
    p();
    return 0;
}
