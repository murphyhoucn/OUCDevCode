#include <stdio.h>

int main()
{
	int maxnum(int a, int b);
	int a;
	int b;

	scanf_s("%d %d", &a, &b);

	printf("max=%d\n", maxnum(a, b));

	return 0;
}

int maxnum(int a, int b)
{
	return a > b ? a : b;
}