#include <stdio.h>

int main()
{
    int i=3;
    const int* p1=&i;
    //const出现在*左边，(*p)不可变，p可变;
    int* const p2=&i;
    //const出现在*右边，p不可变，*p可变;

    p1=NULL;
    p2=NULL;
    //p2不可变

    *p1=4;
    //*p1不可变
    *p2=4;

    return 0;
}
