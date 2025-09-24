#include <stdio.h>

int main()
{
	int maxnum(int x, int y);
	int a, b;
	int c;

	scanf_s("%d,%d", &a, &b);

	c = maxnum(a, b);
	printf("max=%d\n", c);

	return 0;

}

int maxnum(int x, int y)
{
	return x > y ? x : y;
}