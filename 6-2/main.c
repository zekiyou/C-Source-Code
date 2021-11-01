#include <stdio.h>

void f1(int i){
    if(i<60)
        printf("Failed\n");
    else if(60>=i && i<=80)
        printf("Good\n");
    else
        printf("Excellent\n");
}
//if语句适用于范围划分判断的情况

void f2(int i){
    switch (i<60) {
    case 1:
        printf("Failed\n");
        break;
    default:
        switch (60>=i && i<=80) {
        case 1:
            printf("Good\n");
            break;
        default:
            printf("Excellent\n");
            break;
        }
        break;
    }
}
//if与switch互换

void f3(char c){
    switch (c) {
    case 'A':
        printf("Apple\n");
        break;
    case 'B':
        printf("Banana\n");
        break;
    case 'C':
        printf("Cat\n");
        break;
    default:
        printf("Unkonw\n");
        break;
    }

}
// switch语句适用于单值多分枝情况
// case值排列： 1.按字母或者数字的顺序 2.正常在前 异常在后 3.defalut用于处理真正的异常

void f4(char c){
    if('A' == c)
        printf("Apple\n");
    else if('B' == c)
        printf("Banana\n");
    else if('C' == c)
        printf("Cat\n");

}

int main()
{
    f1(85);
    f2(85);
    f3('B');
    f4('C');

}
