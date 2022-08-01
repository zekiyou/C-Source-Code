#include <stdio.h>

register int c;

int f1(){
    static int r=0;
    r++;
    return r;
}

int f2(){
    int r=0;
    r++;
    return r;
}


int k1=0;

int f3(){
    printf("%d",k1);
    printf("%d",c);
}

int main()
{
    auto int a=0;
    auto int b=0;
    printf("0x%p\n",&a);
    printf("0x%p\n",&b);
   
    static int c=0;
    printf("0x%p\n",&c);
   
    register int d;
    printf("0x%x",&d)£»

    for(int i=0;i<=10;i++){
        printf("%d\n",f1());
    }

    for(int i=0;i<=10;i++){
        printf("%d\n",f2());
    }

    return 0;
}