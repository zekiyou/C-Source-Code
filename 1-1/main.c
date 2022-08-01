#include <stdio.h>

typedef struct _tag_ts
{
    int a;
    char b;
}Ts;
//自定义数据类型 本质上也是用于划分固定内存大小

int main()
{
    int a;              //数据类型用于声明变量 变量的内存空间大小取决于其隶属的数据类型
    a=2;                //程序通过操作变量名来操作内存空间
    printf("%d\n",a);
    printf("%d\n",sizeof(a));
    Ts c;
    printf("%d\n",sizeof(c));

    char* p;
    printf("%d\n",sizeof(p));

    return 0;
}
