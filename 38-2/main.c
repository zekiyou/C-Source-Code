#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void f(int* p){
    for(int i=0;i<SIZE;i++)
        printf("%d\n",p[i]);
}

int main()
{
    int* p=malloc(SIZE*sizeof(int));
    //malloc的参数为字节大小，内存不出初始化为随机值

    f(p);


    int* p2=calloc(SIZE,sizeof(int));
    //calloc参数为num和size，内存初始化为0
    f(p2);

    int* p3=realloc(p,sizeof(int)*2*SIZE);
    //realloc重置内存空间大小




    return 0;
}
