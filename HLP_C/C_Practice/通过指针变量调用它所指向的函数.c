#include <stdio.h>

int main()
{
	int max(int x, int y);

	int(*p)(int, int);

	int a, b, c;

	p = max;   //指针p指向max函数

	printf("please enter a and b:\n");

	scanf_s("%d %d", &a, &b);
	
	c = (*p)(a, b);

	printf("a=%d\nb=%d\nmax=%d\n", a, b, c);

	return 0;
}

int max(int x, int y)
{
	return x > y ? x : y;
}