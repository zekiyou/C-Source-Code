#include <stdio.h>

int f1(int i){
    int ret=0;

    do{
        ret+=i;
        i--;
    }while(i>0);

    return ret;
}
//do while 先执行再判断 循环体至少执行1次

int f2(int i){
    int ret=0;

    while(i>0){
        ret+=i;
        i--;
    }

    return ret;
}
//while 先判断后执行 循环体可能不执行 while适用于循环次数不确定的情况

int f3(int i){
    int ret=0;
    for(int n=1;n<=i;n++)
        ret+=n;
    return ret;
}
//for 先判断后执行 可与while互换 更简洁 for适用于循环次数确定的情况

int main()
{

    printf("%d\n",f1(100));
    printf("%d\n",f2(100));
    printf("%d\n",f3(100));

    return 0;
}

//C语言中有三种基本的循环结构，for、while、do-while，每种循环都有自己的特点，你需要根据你所面临的状况进行选择。
//for循环：使用的时候明确循环次数，即知道循环进行多少次。也就是说如果你现在要使用循环，而且你知道循环具体多少次，可以选择for循环。
//eg:遍历一个数组。for（i=0；i<数组的长度；i++）{}；
//while循环：不需要明确循环具体循环多少次，只需要知道循环终止条件。比如使用循环读取若干字符，但是不知道具体读取多少个，也就是不知道循环次数，但是却知道，当输入某个字符，例如‘q’的时候退出，即循环终止。
//eg：读取若干字符，当读取到q的时候退出。while（q ！= getchar（））{}；
//do-while循环：和while循环类似，但是他有个特点，就是他保证了循环至少进行一次，也就是说先运行一次循环体，在判断结束条件，在我们实际使用用经常使用都do-while（）的用法，你可以详细了解下，有很多关于do-while的讲解，在很多情况下他的作用是很“神奇"的.
