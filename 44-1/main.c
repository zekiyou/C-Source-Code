#include <stdio.h>

void f(int a,int b){

    printf("a=%d,b=%d",a,b);
}
int main()
{
    int i=0;

    f(i++,i++);
    // b=i++先执行  a=i++后执行
    // 函数参数的求值顺序依赖于编译器
    return 0;
}
