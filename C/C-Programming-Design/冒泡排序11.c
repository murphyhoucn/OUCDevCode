#include <stdio.h>
#define N 10
int main(void)
{
	int a[N];
	int i;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}

	int temp = 0;
	temp = a[1];
	a[1] = a[4];
	a[4] = temp;

	int j;
	for (j = 0; j < N - 1; j++)
	{
		for (i = 0; i < N - 1 - j; i++)
		{
			if (a[i] < a[i  + 1])
			{
				temp = a[i];
				a[i] = a[j + 1];
				a[i+ 1] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\t", a[i]);
	}

	return 0;
}