#include <stdio.h>

#define PATH1 "C:\\Users\\Administrator\\Desktop\\C Code"
//#define是预处理器处理的单元
//#define是单纯的文本替换

#define DIM(a) sizeof(a)/sizeof(*a)
//#define类似于函数调用 但比函数调用更加强大

void def(){
    #define PI 3.1415926
    //#define定义后所有的代码块都能用 无作用域限定
}


int main()
{
    printf("[%s] {%s:%d}\n", __DATE__, __FILE__, __LINE__);
    float pi=PI;
    char* p=PATH1;
    int a[10];
    printf("%d",DIM(a));
    return 0;
}
