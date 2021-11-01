#include <stdio.h>

void f1(int n){
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
            break;
        printf("%d\n",i);
    }
}
//break 表示 终止循环的执行

void f2(int n){
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
            continue;
        printf("%d\n",i);
    }
}
//continue 表示 终止本次循环 进入下次循环

int main()
{
    f1(100);
    f2(100);

    return 0;
}
