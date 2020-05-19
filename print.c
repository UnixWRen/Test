/*在主函数中调用在头文件中申明的printHello函数*/
//print.c
#include "print.h"

int main(void){
	printHello();
	return 0;
}


/*单独定义printHello函数在某源文件中*/
//printHello.c
#include "print.h"

void printHello()
{
	printf("hello word!\n");
}


/*将某函数的申明语句写在头文件中，能够直接在其他源文件中调用该函数*/
//stdio.h
#include "stdio.h"

void printHello(void);
