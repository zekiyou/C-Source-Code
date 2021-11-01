#include<stdio.h>
#include<malloc.h>

int* f(){
    int a[3]={0,1,2};
    return a;
}
//函数的栈空间，随着程序的返回被销毁,所以函数不能返回局部变量的地址
int* f2(){

    int* p=(int*)malloc(3*sizeof(int));
    //malloc申请的堆空间不会随着函数的返回而销毁，主动释放之前都存在
    for(int i=0;i<3;i++)
        p[i]=i;
    return p;

}

int main()
{
    int* p=f2();
    for(int i=0;i<3;i++)
        printf("%d",p[i]);

    int* p2=f();
    for(int i=0;i<3;i++)
        printf("%d",p2i]);

    return 0;
}
