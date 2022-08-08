#include <stdio.h>

typedef int(*weapon)(void);

void fight(weapon wp){
    int result;

    result=wp();
    //调用者不知道会调用哪个函数，只知道有函数可以调用
    printf("result=%d\n",result);

}
//通过函数指针实现回调

int a(void){
   return 1;
}

int b(void){
    return 2;
}

//回调函数不知道什么时候会被调用

int main()
{
    fight(a);
    fight(b);
    return 0;
}
