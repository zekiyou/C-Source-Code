#include <stdio.h>

int main()
{
    int a[3][3]={{0,1,2},{3,4,5},{6,7,8}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",*(*(a+i)+j));
        }
    }

    //二维数组是元素是数组类型的数组
    //二维数组名也代表数组元素首地址，数组元素是int[3]
    //*(a+i)是数组=指针
    //*(a[i]+j) = a[i][j]

    return 0;
}
