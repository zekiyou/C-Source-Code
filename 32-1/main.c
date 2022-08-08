#include <stdio.h>

typedef int(AINT5)[5];

int main()
{
    AINT5 a={0,1,2,3,4};
    //a数组的类型为int[5];

    AINT5* p=&a;
    //指向int[5]类型的指针p
    //数组指针是指向整个数组的指针
    int(*pt)[5]=&a;


    printf("%d\n",(*p)[2]);
    //数组指针有指针的特性，*p为指针指向内存的值即a数组
    printf("%p\n",p);
    //p指针的值 为数组a的地址

    return 0;
}
