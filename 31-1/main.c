#include <stdio.h>
#include <string.h>

int main()
{
    char buf[10]={0};
    char* str="abc%s";

    snprintf(buf,sizeof(buf),str,"Test");
    printf("%s\n",buf);
    //snprintf的使用，若含有格式化信息，则需要加上第四个参数

    if("abc"=="abc"){
        printf("Equal\n");
    }else
        printf("UnEqual\n");
    //gcc优化后是Equal，bcc不优化认为两个字符串地址不同 UnEqual

    if(strcmp("abc","abc")==0){
        printf("Equal\n");
    }else
        printf("UnEqual\n");

    //strcmp函数比较的字符串的内容 Equal
    //字符串比较要使用strcmp



    return 0;
}
