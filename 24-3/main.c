#include <stdio.h>

#pragma pack (4)

struct  Test1
{
    char c1;
    short s;
    char c2;
    int i;
}Test1;

struct  Test2
{
    char c1;
    char c2;
    short s;
    int i;
}Test2;



//内存对齐： CPU对内存的读取不是连续任意的，需要分块进行
//          内存中的数据也需要内存对齐
//用#pragma pack指定内存对齐规则
int main()
{

    printf("Test1=%d\n",sizeof(Test1));
    printf("Test2=%d\n",sizeof(Test2));
    return 0;
}
