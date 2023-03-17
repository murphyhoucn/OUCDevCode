#include <stdio.h>

int main()
{
	int a[100];
	int n;
	scanf_s("%d", &n);

	int i,j;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			int temp;
			if (a[j] < a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}


	return 0;
}