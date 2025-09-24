#include <stdio.h>

int main()
{
	void inv(int x[], int n);

	int i;
	int a[5];
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("the orginal array is:     ");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);
	}

	printf("\n");

	inv(a, 5);

	printf("the inverted array is:    ");

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	return 0;
}

void inv(int x[], int n)
{
	int temp;
	int i;
	int j;
	int m;
	m = (n - 1) / 2;

	for (i = 0; i <=m; i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}

}