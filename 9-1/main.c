#include <stdio.h>

const int b=3;

int main()
{
    const int i=5;
    printf("%d\n",i);
    int* p=&i;
    *p=7;
    printf("%d\n",i);
    //const修饰的变量不是真正的常量
    //只是告诉编译器改变量不能出现在等号左边

    printf("%d\n",b);
    p=&b;
    //*p=7;
    printf("%d\n",b);
    //wingw等标准编译器不对const的全局生命周期进行优化
    //gcc等现代编译器将其放入只读存储区做到不可改变
	
    return 0;
}

