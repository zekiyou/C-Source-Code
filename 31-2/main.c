#include <stdio.h>

void rightmove(const char* src, char* result, unsigned int n){
    const unsigned int len= strlen(src);
    int i=0;
    for(i=0;i<len;i++){
        result[(n+i)%len]=src[i];
    }

    result[len] = '\0';

}

int main()
{
    char result[20]={0};

    rightmove("abcd",result,3);

    printf("%s\n",result);
    return 0;
}
