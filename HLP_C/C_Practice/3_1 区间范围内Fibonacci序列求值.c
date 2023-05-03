#include <stdio.h>
#define N 1000

int main(void)
{
	void fib(int m, int n);

	int n;
	int m;
	scanf("%d %d", &m, &n);
	//scanf_s("%d %d", &m, &n);
	fib(m, n);

	return 0;
}

void fib(int m, int n)
{
	int array[N] = { 1,1 };

	int i;

	for (i = 2; i < n+1; i++)
	{
		array[i] = array[i - 1] + array[i - 2];
	}

	/*
	printf("test:");
	for (i = 0; i < n + 1; i++)
	{
		printf("%d\t", array[i]);
	}
	*/
	

	int count = 0;
	for (i = 0; array[i]<=n; i++)
	{
		if (m <= array[i])
		{
			count++;
		}
	}
	printf("%d ", count);



	printf("fib:");
	for (i = 0; array[i] <= n; i++)
	{
		if (m <= array[i])
		{
			printf("%d ",array[i]);
		}
	}
}