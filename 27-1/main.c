#include <stdio.h>

typedef int (INT5) [5];

int main()
{
    INT5 a;
    
    printf("%p\n", &(a[0]));
    printf("%p\n", &(a[1]));
    // 连续内存中的变量集合
    
    
    //int a[5]的数据类型是 int[5]
    
    return 0;
}