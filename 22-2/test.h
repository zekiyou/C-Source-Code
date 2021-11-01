#ifndef TEST_H
#define TEST_H
int a=3;
//重复包含test.h  预处理阶段嵌入2次  导致a变量被重复定义
//利用#ifdefine条件编译来控制编译
#endif
