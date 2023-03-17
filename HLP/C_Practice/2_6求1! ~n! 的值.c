#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int fact(int n);
	int i;
	for (i = 1; i < n + 1; i++)
	{
		printf("%d!=%d", i, fact(i));
	}

	return 0;
}
int fact(int n)
{
	int f;
	
	if (n == 0) { return f = 1; }
	else
	{
		return f = n * fact(n - 1);
	}
}