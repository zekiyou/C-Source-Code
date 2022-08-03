#include <stdio.h>

#define STRING(s) #s
//#运算符在预处理阶段，将宏参数转换为字符串(将参数f转换为字符串f)


#define CALL(f,p) (printf("%s\n",#f),f(p))
//通过#运算符把函数名转换为字符串打印

#define CONNECT(a,b) a##b
//##运算符在预处理阶段，将宏参数粘连在一起(将参数a,b粘连成ab)
//#作用于宏定义，作用于预处理期

#define STRUCT(type) typedef struct _tag_##type type;struct _tag_##type

STRUCT(student)
{
    int stdid;
    char* stdname;
};

int square(int p){
    int ret=p*p;
    return ret;
}

int main()
{
    printf("%s\n",STRING(Hello));

    int x=CALL(square,4);
    //printf("%s",square),square(4);
    //#将square转换成"square"字符串
    printf("%d\n",x);

    student s1;


    return 0;
}
