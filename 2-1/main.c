#include <stdio.h>

int main()
{
    int sign;
    char c=5;
    short s=-1;
    int i=7;

    sign=(c & 0x80);        //c与1000 0000 按位与 若为0 则c的最高位为0 若不为0 则c的最高位为1
    if(sign == 0)
        printf("c=%d最高位为0\n",c);
    else
        printf("c=%d最高位为1\n",c);

    sign=(s & 0x8000);
    if(sign == 0)
        printf("s=%d最高位为0\n",s);
    else
        printf("s=%d最高位为1\n",s);

    sign=(i & 0x80000000);
    if(sign == 0)
        printf("i=%d最高位为0\n",i);
    else
        printf("i=%d最高位为1\n",i);


    return 0;
}
