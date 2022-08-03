#include <stdio.h>

#define C 2

int main()
{
#if (C==1)
    printf("#if");
//条件编译预处理阶段由预处理器进行条件分支
//用条件编译选择代码进行编译

#else
    printf("#else");
#endif
    return 0;
}
