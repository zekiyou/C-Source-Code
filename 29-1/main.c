#include <stdio.h>

int main()
{
    int a[5]={0,1,2,3,4};

    printf("a=%p\n",a);
    printf("*a=%d\n",*a);
    printf("*(a+1)=%d\n",*(a+1));
    //数组当指针使用

    printf("sizeof(a)=%d\n",sizeof(a));
    printf("&a=%p\n",&a);
    //但数组不等于指针

    int* p=a;
    for(int i=0;i<5;i++)
        printf("p[%d]=%d\n",i,p[i]);
    //指针当数组使用

    int* b={0,1,2,3,4};
    printf("%d",b);
    printf("%d",*b);
    //但指针也不等于数组

    return 0;
}
