#include <stdio.h>

union un{
    int a;
    char c;
};
//union的使用与struct类似

int main()
{
    union un u;
    printf("sizeof of u=%d\n",sizeof(u));
    //union只分配最大成员的空间，所有成员共享这个空间

    u.a=0x12345678;
    printf("0x%x",u.c);
    //union的使用受到系统大小端的影响

    //低地址存取低位数据(0x78) 小端系统
    return 0;
}
