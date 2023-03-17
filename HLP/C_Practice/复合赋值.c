#include <stdio.h>
int main()
{
	int a;
	a = 10;

	printf("a++=%d\n", a++); //后缀是加一以前的
	printf("a=%d\n", a);

	printf("++a=%d\n", ++a); //前缀是加一以后的
	printf("a=%d\n", a);

	return 0;
}