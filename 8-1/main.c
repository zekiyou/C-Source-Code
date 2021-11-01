#include <stdio.h>

void TestGoto(void)
{
    int i;

    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            if (i > 6)
            {
                goto label;
            }
            printf("%s : i = %d\n", __FUNCTION__, i);
        }
    }
    label:
        printf("test goto end!");
}

int main()
{
    TestGoto();
    //goto破坏了C语言的结构化特性:顺序结构 选择结构 循环结构
    return 0;
}

//注意：在任何编程语言中，都不建议使用 goto 语句。因为它使得程序的控制流难以跟踪，使程序难以理解和难以修改。
//任何使用 goto 语句的程序可以改写成不需要使用 goto 语句的写法。
