#include <stdio.h>



int main(void)
{
	int fun(int n);
	int m, n;

	printf("Enter m: ");
	scanf("%d", &m);

	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d!+%d!=%d", m, n, fun(m) + fun(n));

	return 0;
	
}

int fun(int n)
{
	int f = 0;
	if (n == 0)
	{
		f = 1;
		return f;
	}
	else
	{
		return f = n * fun(n - 1);
	}
		

	
}