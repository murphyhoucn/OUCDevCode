#include <stdio.h>

int main()
{
	int a[10];
	int i, j, t;

	printf("input 10 number:\n");

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("\n");

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("the sorted number is:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}