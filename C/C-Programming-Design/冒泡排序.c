#include <stdio.h>

int main()
{
	int a[100];
	int i, j;
	int temp;

	int n;
	//scanf_s("%d", &n);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		//scanf_s("%d", &a[i]);
		scanf("%d", &a[i]);
	}

	/*for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}*/


	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
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