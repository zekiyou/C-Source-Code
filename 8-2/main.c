#include <stdio.h>

f1(){

}

void f2(void){

}

void MemSet(void* src, int length, unsigned char n){
    unsigned char* p=(unsigned char*)src;
    //void*指针作为右值使用需要进行强制类型转换
    for(int i=0;i<length;i++){
        p[i]=n;
    }
}

int main()
{
    f1(1,2,3,4,5);
    //默认接受任意参数 返回值类型为int
    f2();
    //void 表示无参数 无返回值
    //void a;
    //不存在void类型变量 error
    void *p;
    //存在void* 类型指针

    int a[5];
    char b[10];

    MemSet(a,sizeof(a),0);
    MemSet(b,sizeof(b),3);

    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\n",b[i]);
    }


    return 0;
}
