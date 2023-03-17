#include <stdio.h>
int main()
{
	int a;
	int b;
	a = 6;
	b = 32769;

	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(a)=%ld\n", sizeof(a));
	printf("%d", b);
	return 0;
}

//sizeof 是一个运算符，给出某个运算符或者变量在内存中占据的字节数