#include <stdio.h>

int main()
{
    int i=0;
    int k=0;
    int j=0;

    ++i||++k&&++j;
    //1.逻辑与逻辑或的短路现象
    //2.逻辑与逻辑或的计算从左向右
    //3.逻辑与的优先级高于逻辑或
    //++i||(++k&&++j) 优先级加括号 其次从左向右 ++i=1 ==> 1||() 短路


    printf("i=%d,j=%d,k=%d\n",i,j,k);

    printf("%d\n",!0);
    printf("%d\n",!-10);
    //C语言中 0为假 非0都为真
    return 0;
}
