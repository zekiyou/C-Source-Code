#include <stdio.h>

void f(int a[][3], int row){
//退化为  void f(int (*a)[3]) 指向int[3]类型的指针
//第一维丢失长度信息，需要给出长度

    printf("sizeof(a)=%d\n",sizeof(a));
    //a退化为数组指针，4
    printf("sizeof(*a)=%d\n",sizeof(*a));
    //a指向数组int[3],12

    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){

            printf("%d",*((*a+i)+j));

        }
        printf("\n");
    }


}
//一维数组作为参数退化为指针
//二维数组是元素类型为一维数组的数组
//二维数组作为参数，数组退化为指针，即指向一位数组类型的指针，数组指针
//故二维数组作为参数，第一维退化为,指针可变，其他维需要给出长度信息

int main()
{
    int a[4][3]={{0,1,2},{3,4,5},{6,7,8},{9,10,11}};
    f(a,4);
    return 0;
}
