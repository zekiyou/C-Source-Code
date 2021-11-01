#include <stdio.h>
const char* f(const int i){
    i=6;
    //参数被const修饰 修改函数体参数 error
    return "YouZhiQiang";
}
//const 修饰函数参数 表示不希望在函数体内改变参数
//const 修饰返回值 表示返回值不可改变
//字符串字面量存于程序只读存储区
int main()
{
    const char* p=f(0);
    printf("%s",p);
    return 0;
}
