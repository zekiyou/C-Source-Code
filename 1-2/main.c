#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0b101;
    int b = 012;
    int c = 0x123;

    printf("%d, %d, %d\n", a, b, c);
    printf("%x, %x, %x\n", a, b, c);

    return 0;
}
