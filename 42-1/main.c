#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* p=(int*)malloc(sizeof(int)*4);

    if(!p){

    }//内存操作习惯1:检查malloc是否申请成功

    free(p);
    p=NULL;
    //free后立马赋值NULL避免野指针

    int* p2=(int*)malloc(sizeof(int)*4);
    //保证malloc与free一对一匹配
    //malloc多于free内存泄漏

    //free多于malloc 操作野指针 程序崩溃

    return 0;
}
