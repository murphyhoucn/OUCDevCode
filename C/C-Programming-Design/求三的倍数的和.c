#include<stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);

	int sum = 0;

	int i;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0) 
		{
			sum += i;
		}
	}
	printf("%d", sum);

	return 0;
}