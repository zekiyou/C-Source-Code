#include <stdio.h>
#include <stdbool.h>
#define EPSINON 0.00000001
int main()
{
    bool a = true;
    int b = 0;
    float c = 0.0;
    if (a)
        printf("bool型的变量直接作为if的条件\n");
    if (0 == b)
        printf("变量与0值比较 0值在比较符号左边\n");
    if ((-EPSINON <= c) && (c <= EPSINON))
        printf("浮点数与0值比较 需要定义精度\n");

    return 0;
}
