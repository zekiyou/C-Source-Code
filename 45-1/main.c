#include <stdio.h>
#include  <stdarg.h>

int f(int n,...){

    int ret=0;
    int i;
    va_list varg;
    //va_list创建可变参数的列表
    va_start(varg,n);
    //va_start绑定可变参数与列表，n后面的参数是可变参数
    for(i=0;i<n;i++){
        ret+=va_arg(varg,int);
        //va_arg使用参数列表里的参数，类型指定为int

    }
    va_end(varg);
    //va_end对参数列表释放，访问结束

    return ret;

}
//可变参数函数，必须有一个确定的参数
//另外函数内部无法得知可变参数的类型与个数

int main()
{
    printf("1+2+3+4=%d\n",f(4,1,2,3,4));
    printf("1+2=%d",f(2,1,2));
    return 0;
}
