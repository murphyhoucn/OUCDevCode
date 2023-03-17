#include <stdio.h>

int main()
{
	int fact(int n);
	int n;

	printf("input your integer number:");
	scanf_s("%d", &n);

	printf("%d!=%d", n, fact(n));
}

int fact(int n)
{
	int f;
	if (n < 0) { printf("input error"); }
	else if (n == 0 || n == 1) { f = 1; }

	else
	{
		f = fact(n - 1)*n;
	}

	return f;
}