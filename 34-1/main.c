#include <stdio.h>

void change(int* p,int a){

    p=&a;

}

//指针也要进行传值or传址调用


void new_change(int** p,int a){

    *p=&a;

}

int main()
{
    int a=3;
    int b=5;
    int* p=a;

    printf("0x%p",p);

    change(p,b);
    //指针p进行的传值调用，把值赋予形参p，形参变，实参不变

    printf("0x%p",p);

    new_change(&p,b);
    //指针p进行的传址调用，&p的值赋予形参p

    printf("0x%p",p);

    return 0;
}
