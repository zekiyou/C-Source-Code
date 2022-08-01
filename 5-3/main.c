#include <stdio.h>
#include <stdlib.h>
extern int add(int x, int y);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("%d",add(3,8));
	return 0;
}

// C语言main.c 调用C++ 通过extern C 让C++ tset.cpp的add函数以C方式编译 
