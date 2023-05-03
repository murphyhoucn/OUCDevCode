#include <stdio.h>

int main()
{
	void inv(int * x, int n);

	int array[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &array[i]);
	}

	printf("the orginal array is:   ");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n");

	inv(array, 5);

	printf("the inverted array is:  ");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n");

	return 0;
}

void inv(int *x, int n)
{
	int *p;
	int temp;
	int *i;
	int *j;
	int m = (n - 1) / 2;

	i = x;
	j = x + n - 1;
	p = x + m;

	for (; i <= p; i ++ , j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}