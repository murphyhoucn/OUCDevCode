#include <stdio.h>

int main(void)
{
	int fun(int n);

	int n;
	int m;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d!+%d!=%d", m, n, fun(m) + fun(n));


	return 0;
}

int fun(int a)
{
	int f;

	if (a == 0)
	{
		f = 1;
		return f;
	}
	else
	{
		return f=a * fun(a - 1);
	}
}