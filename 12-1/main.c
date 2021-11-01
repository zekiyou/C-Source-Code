#include <stdio.h>

int main()
{
    int/**/i;
    //编译过程注视用空格代替
    char* s="This \\node";
    //字符串中的注释符号不起注释作用
    printf("%s",s);

    i++;//i自增 error

    //注释是对程序与原因意图的阐述，而不是描述程序的执行过程
    //注释是对代码的提示，力求简洁明了
    //无意义的注释有害无利

    return 0;
}
