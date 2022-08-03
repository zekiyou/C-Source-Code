#include <stdio.h>

int main()
{

    int a=1;
    int b=2;
    int c;
    c = a?b:a;
    //三目运算符的本质是if-else
    printf("%d\n",c);

    a?b:a=3;
    //三目运算符返回的是 值 而非变量
    //2=3; error
    //运用返回地址来 返回变量

    *(a?&b:&a)=3;
    printf("%d\n",b);


    char c1=0;
    printf("%d\n",sizeof(c1?c1:a));
    //三目运算符的返回类型 是c1隐式类型转换成a类型 返回

    return 0;
}
