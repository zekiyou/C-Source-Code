#include <stdio.h>

//函数的设计原则
void str_copy(char* str_dest,const char* str_src);

/*
1.函数名反映功能
2.参数名反映参数意义
3.功能独立 规模小控制80行 有助于维护
4.避免参数过多 控制4个以内
5.不要返回局部变量的指针
6.对参数要进行有效值检查 如:p!=NULL length>0
7.对不应该被在函数里修改的参数要用const声明
8.函数尽量是无状态函数 相同输入 相同输出  避免使用全局变量
*/




int main()
{

    return 0;
}
