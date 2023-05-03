#include <stdio.h>

int main()
{
	int n;
	//scanf_s("%d", &n);
	scanf("%d", &n);
	int a[1000];
	int i;
	int j;
	int temp;

	for (i = 0; i < n; i++)
	{
		//scanf_s("%d", &a[i]);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (a[j] > a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("%d", a[0]);

	return 0;
}