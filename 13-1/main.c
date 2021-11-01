#include <stdio.h>

#define swap(a,b) {\
    int temp=a;    \
    a=b;           \
    b=temp;}
//接续符适合用于宏代码块 增加可读性

int main()
{
    printf("Hello\
world!\n");
    //编译阶段，编译器删除接续符，跟在反斜杠后面的字符自动接续到前一行

    int v=3;
    int u=4;
    swap(v,u);

    return 0;
}
