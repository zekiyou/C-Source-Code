#include <stdio.h>

#define RESET(p,len) while(len>0) ((char*)p)[--len]=0

void f(void* p,int len){

    while(len>0)
        ((char*)p)[--len]=0;

}

//宏和函数都可以完成的功能
//宏是文本替换，对于参数没有类型检查与警告 更易错


int main()
{
    int len=30;
    int arr[6]={0,1,2,3,4,5};


    for(int i=0;i<6;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }


    RESET(arr,len);
    //RESET(6,len);
    //直接的文本替换，编译器无任何警告
    //f(6,len);
    //实参形参的类型转化，参数类型检查警告


    for(int i=0;i<6;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }


    return 0;
}
