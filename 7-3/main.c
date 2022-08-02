#include <stdio.h>
#include <stdlib.h>
int f1(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); 
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

    free(p); 

    return ret;

}

int f2(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); 

    if(NULL == p)
    {
        free(p); 

        return 0;
    }

    if(n < 0)
    {
        free(p); 

        return 0;
    }

    for(i=0; i<n; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }

    free(p); 

    return 1;
}


int main()
{
    f1(10);
    f2(10);
    return 0;
}
