#include <stdio.h>

int main()
{
	int a = 100;
	int b = 10;
	int * pointer_1;  //定义指向整型数据的指针变量Pointer_1
	int * pointer_2;  //定义指向整型数据的指针变量Pointer_2

	pointer_1 = &a;
	pointer_2 = &b;

	printf("a=%d\tb=%d\n", a, b);
	printf("*pointer_1=%d\t*pointer_2=%d\n", *pointer_1, *pointer_2);//输出的是指针指向的变量的值
	printf("pointer_1=%d\tpointer_2=%d\n", pointer_1, pointer_2);  //输出的是变量的地址（即指针）

	return 0;

}