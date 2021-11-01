#include <stdio.h>

int main()
{
    int i=0;
    int j=0;

    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int b[3][3]={
      (1,2,3), //逗号表达式(1,2,3)的值为最后的子表达式3
      (4,5,6),
      (7,8,9)
      //3,6,9,0,0,0,0,0,0,0
    };

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

            printf("a=%d\n",a[i][j]);

    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

            printf("b=%d\n",b[i][j]);

    }
    
   
    
    return 0;
}
