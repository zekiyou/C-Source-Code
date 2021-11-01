#include <stdio.h>

int main()
{
    char*s ="\141\t\x62\n";
    printf("%s",s);

    //反斜杠作为转义符需出现在单引号和双引号之间
    //反斜杠作为转义符的作用:
    //1.表示无会显字符\n\t
    //2.表示常规字符 \141 3位八进制ASKII码表字符'a' \x62 2位16进制表字符'b'

    return 0;
}
