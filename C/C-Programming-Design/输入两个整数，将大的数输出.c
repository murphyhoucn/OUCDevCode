#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	int max(int x, int y);
	printf("%d", max(a, b));

	return 0;
}

int max(int x, int y)
{
	return x > y ? x : y;
}