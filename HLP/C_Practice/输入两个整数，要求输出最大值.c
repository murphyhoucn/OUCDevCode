#include <stdio.h>

int main()
{
	int max(int x, int y);

	int a, b;
	scanf_s("%d,%d", &a, &b);

	printf("%d\n", max(a, b));

	

	return 0;
}


int max(int x, int y)
{
	int z = x > y ? x : y;

	return z;
}