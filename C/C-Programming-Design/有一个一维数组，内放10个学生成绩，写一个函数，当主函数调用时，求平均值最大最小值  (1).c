#include <stdio.h>

int main()
{
	int amm(int array[]);

	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	amm(a);

	return 0;
}

int amm(int array[])
{
	int i;
	int max = array[0];
	int min = array[0];
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += array[i];
	}

	printf("average=%d\n", sum / 10);

	for (i = 0; i < 10; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}

	printf("max=%d\n", max);

	for (i = 0; i < 10; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
	}

	printf("min=%d\n", min);
}