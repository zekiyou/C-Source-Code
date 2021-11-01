#include <stdio.h>
#include <stdlib.h>
int f1(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); //分配资源
    do
    {
        if(NULL == p) break;

        if(n < 0) break;

        for(i=0; i<n; i++)
        {
            p[i] = i;
            printf("%d\n", p[i]);
        }

        ret = 1;
    }while(0);

    free(p); //释放资源

    return ret;

}

int f2(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); //分配资源

    if(NULL == p)
    {
        free(p); //释放资源(第1次)

        return 0;
    }

    if(n < 0)
    {
        free(p); //释放资源(第2次)

        return 0;
    }

    for(i=0; i<n; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }

    free(p); //释放资源(第3次)

    return 1;
}


int main()
{
    f1(10);
    f2(10);
    return 0;
}

//可以看到在第二种写法中我们free了3次，如果不free就会造成内存泄漏；
//而在第一种方法中我们只free了一次，这样内存就统一分配、统一释放；
//很显然第一种方法更好，在这里我们就巧妙的使用了一个do...while(0)解决了这个问题！！
