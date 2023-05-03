#include <stdio.h>

int main(void)
{
	int sum(int n);
	int n;
	scanf_s("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("sum=%d\n", sum(i));
	}

	return 0;
}

int sum(int n)
{
	static int s = 1;

	static int sum=0;

	sum += s;

	s++;

	return sum;
}