#include <stdio.h>

int a = 3;
int b = 5;

int main()
{
	int max(int a, int b);

	//int a = 8;

	printf("a=%d\tb=%d\n", a, b);

	printf("max=%d\n", max(a, b));
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;
}