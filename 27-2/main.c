#include <stdio.h>

int main()
{
    int a[10]={1};
    int* p;
    p=a;
    //数组名大多数时候方便理解可以当做常量指针来操作
    printf("p=%p\n",p);
    printf("a=%p\n",a);

    printf("a[0]=%d\n",*a);
    printf("a[1]=%d\n",*(a+1));

    //除了在&和sizeof时不能当做常量指针
    printf("&p=%p\n",&p);
    printf("&a=%p\n",&a);
    //&时，&p是指针本身的地址，&a是数组的地址

    printf("sizeof(p)=%d\n",sizeof(p));
    printf("sizeof(a)=%d\n",sizeof(a));
    //sizeof时，sizeof(p)是指针p的内存大小（4），sizeof(a)是数组a的内存大小（40）


    return 0;
}
