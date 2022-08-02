#include <stdio.h>

//在实际编程中，有些数据的取值往往是有限的，只能是非常少量的整数，
//并且最好为每个值都取一个名字，以方便在后续代码中使用
//比如一个星期只有七天，一年只有十二个月，一个班每周有六门课程等。


//#define Mon 1
//#define Tues 2
//#define Wed 3
//#define Thurs 4
//#define Fri 5
//#define Sat 6
//#define Sun 7

//#define命令虽然能解决问题，但也带来了不小的副作用，导致宏名过多，代码松散

enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
//C语言提供了一种枚举（Enum）类型，能够列出所有可能的取值，并给它们取一个名字。

//枚举和宏其实非常类似：宏在预处理阶段将名字替换成对应的值，枚举在编译阶段将名字替换成对应的值。
//我们可以将枚举理解为编译阶段的宏。

enum{
  array=10
};
//enum可用于创建真正的常量

int main()
{
    enum week today=Mon;
    //enum的使用

    switch (today) {
    case 1:
        printf("Mon\n");
        break;
    default:
        break;
    }


    int A[array]={0};

    for(int i=0;i<10;i++)
        printf("%d\n",A[i]);
    return 0;
}


