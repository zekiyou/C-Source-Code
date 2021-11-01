#include <stdio.h>

int main()
{
    int i=100000;

    int* ip=&i;
    char* cp=&i;

    printf("ip=%p\n",ip);
    printf("cp=%p\n",cp);
    //ip和cp都指向同一个初始地址，初始地址相同不等于地址相同 cp和ip的地址的长度不同
    printf("ip=%d\n",*ip);
    printf("cp=%d\n",*cp);
    //ip指向i的初始地址4字节的长度
    //cp指向i的初始地址1字节的长度



    int a[10];
    printf("%p\n",a);
    //数组名代表数组首元素的地址
    printf("%p\n",&a);
    //&a代表整个元素的地址
    printf("%p\n",&a[0]);
    //a的地址（&a）与a第一个元素的地址(&a[0])初始地址相同 地址的长度不同
    //&a[0]指向初始地址4字节的长度
    //a指向初始地址40字节的长度

    printf("%p\n",a+1);
    printf("%p\n",&a+1);

    return 0;
}
