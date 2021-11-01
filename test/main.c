#include <stdio.h>
#include <malloc.h>
#include <math.h>

#pragma pack (1)


int main(){

    int (*p)[10];
    int a[3][10];

    for (int i=0; i<3; i++) {
        for (int j=0; j<10; j++) {
            a[i][j]=i+j;
        }
    }

    int *q;
    p=a;
    q=*p;

    for (int i=0; i<3; i++) {
        for (int j=0; j<10; j++) {
            printf("%d",*q);
            q++;
        }
        printf("\n----------------\n");
//        p++;
//        q=p;
    }


    return 0;
}
