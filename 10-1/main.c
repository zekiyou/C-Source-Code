#include <stdio.h>

struct Ts
{

};
//现代C编译器允许空结构体 但无意义

struct SoftArray{
    int len;
    int array[];
    //sturct的最后一个元素可以是未知大小的数组
};
//利用struct定义柔性数组


struct SoftArray* CreatSoftAarray(int i){
    struct SoftArray* ret= NULL;
    if(i>0){
        ret=(struct SoftArray*)malloc(sizeof(struct SoftArray)+sizeof(int)*i);
        ret->len=i;
        //虽然malloc()函数的类型是(void *),任何类型的指针都可以转换成(void *),但是最好还是在前面进行强制类型转换。
    }
    return ret;
}
//初始化柔性数组

int main()
{
    printf("TS sizeof of=%d\n",sizeof(struct Ts));
    struct SoftArray* sa=CreatSoftAarray(10);

    for(int i=0;i<sa->len;i++){
        sa->array[i]=i+1;
    }//len带有数组的长度信息

    for(int i=0;i<sa->len;i++){
        printf("%d\n",sa->array[i]);
    }
    return 0;
}
