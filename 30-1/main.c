#include <stdio.h>
#include <string.h>


int main()
{
    char str[]={'a'};
    char string[]={'a','\0'};

    printf("%s\n",string);
    printf("%s\n",str);

    //C语言中没有字符串变量
    //通过以\0结尾的特殊字符数组来模拟字符串

    char a[]="ab";
    printf("%c\n",*"ab");
    printf("%c\n",*"ab"+1);//指针运算

    //C语言中有字符字面量 "a"的概念
    //字符字面量可以当做一个常量指针来使用
    //该指针指向的是只读存储区里的字符数组，编译器自动在末尾加上\0

    char b[]="Hello\0World";
    printf("%s\n",b);
    printf("sizeof(b)=%d\n",sizeof(b));
    //所有的字符串处理都以第一个\0为准

    return 0;
}
