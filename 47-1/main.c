#include <stdio.h>

int str(char* p){

    if(*p=='\0')
        return 0;
    if(*p!='\0')
        return str(p+1)+1;

   //大规模问题分解成小规模问题 求p的长度只需要求p+1子串的长度再加1

}
//strlen的递归

int fac(int n){

    if(n>=3){
        return fac(n-1)+fac(n-2);
    }
    //大问题分解成相同的小规模问题
    if(n==2||n==1)
        return 1;
    //边界条件满足 递归结束
}
//斐波那契数列 递归

int main()
{
    printf("%d\n",fac(8));

    printf("strlen=%d",str("Hello"));
    return 0;
}
