#include <stdio.h>

int main()
{

	int a[3];
	int i;
	printf("please enter 10 numbers:\n");
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	int max(int x, int y);

	int m = a[0];
	int n = 0;

	for (i = 1; i < 3; i++)
	{
		if (max(m, a[i])>m)
		{
			m = max(m, a[i]);
			n = i;
		}
	}

	printf("数组中第%d个数是最大值，他是%d\n", n, m);

	return 0;
}

int max(int x, int y)
{
	return (x > y ? x : y);
}