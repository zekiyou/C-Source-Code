#include <stdio.h>

int main()
{
    int* p=NULL;
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);
    //指针与整数运算 p+1=p+1*sizeof(int)=0+4=4

    int a[10]={0};
    int* begin=a;
    char* cbegin=a;
    int* end=a+10;
    char* cp=&a[3];

    //int length=end-cp;
    //指针与指针只支持减法运算 且参与运算的指针类型必须相同 error

    int size=end-begin;
    //只有两个指针指向同一个数组时 指针相减才有意义
    printf("a size=%d\n",size);

    for(p=begin;p<end;p++){
        printf("%d\n",*p);
    }
    //只有两个指针指向同一个数组时 指针之间的关系运算(< > <= )才有意义
    
    printf("cbegin=%p\n",cbegin);
    printf("begin=%p\n",begin);
    if(cbegin==begin)
    	printf("==");
    else 
    	printf("!=");

    return 0;
}
