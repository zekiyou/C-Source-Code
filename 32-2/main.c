#include <stdio.h>

int main()
{
    char* a[]={"abc","def","gh"};
    //指针数组是一个元素都为指针的数组
    //指针数组有数组的特性
    //a数组 是一个元素类型都为char* 有3个元素的数组

    printf("%s\n",a[0]);
    printf("sizeof(a)=%d",sizeof(a));
    //3x4=12

    return 0;
}
