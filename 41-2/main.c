#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct Student
{
    char* name;
    int number;
};

char* func(){
    char* p[]="Hello";
    return p;
}

int main()
{
    struct Student s1;
    //s1.name局部指针变量没有初始化野指针
    char* p=func();
    
    //函数返回局部的地址，野指针

    p=(char*)malloc(sizeof(char)*5);

    strcpy(p,"STRCPYANDSNPRINTF");
    //内存操作但没有长度信息，内存操作越界，野指针
    //改成snprintf
    return 0;
}
