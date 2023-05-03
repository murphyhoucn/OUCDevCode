#include <stdio.h>
#define N 10

int main(void)
{
	int a[N];
	int i;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
		//scanf("%d", &a[i]);
	}

	int j;
	int temp = 0;

	for (j = 0; j < N - 1; j++)
	{
		for (i = 0; i < N-1-j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i + 1];
				a[i+ 1] = a[i];
				a[i] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}