#include <stdio.h>

//函数调用时是传递实参的副本


void swap1(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
//传值调用 只能改变实参的副本

void swap2(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
//传址调用 可以改变实参


int main()
{
    int a=3;
    int b=4;
    printf("a=%d,b=%d\n",a,b);
    swap1(a,b);
    printf("a=%d,b=%d\n",a,b);
    swap2(&a,&b);
    printf("a=%d,b=%d\n",a,b);

    return 0;

}
