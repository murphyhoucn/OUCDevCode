#include <stdio.h>

int f(void);

int a = 12;

int main(int argc, char const *argv[])
{
	f();
	return 0;
}

int f(void)
{
	
	static int b = 1;
	int c = 0;
	printf("&a=%p\n", &a);   
	printf("&b=%p\n", &b);
	//全局变量和静态本地变量的位置紧挨着，所以，静态本地变量是全局变量

	printf("&c=%p\n", &c);
	return 0;
}