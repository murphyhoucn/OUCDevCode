#include <stdio.h>

int main()
{
	void inv(int *x, int n);

	int i;
	int arr[10];
	int *p;
	p = arr;

	printf("the orginal array :\n");

	for (i = 0; i < 10; i++, p++)
	{
		scanf_s("%d", p);
	}

	printf("\n");

	p = arr;

	inv(p, 10);

	printf("the array has been inverted :\n");

	for (p = arr; p < arr+10; p++)
	{
		printf("%d\t", *p);
	}

	printf("\n");

	return 0;
}

void inv(int *x, int n)
{
	int *p;
	int m;
	int temp;
	int *i;
	int *j;

	m = (n - 1) / 2;

	i = x;
	j = x + n - 1;
	p = x + m;

	for (; i <= p; i++, j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}