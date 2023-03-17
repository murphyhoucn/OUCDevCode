#include <stdio.h>

int main()
{
	int i, j;
	int t;
	int num[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9- j; i++)
		{
			if (num[i] > num[i + 1])
			{
				t = num[i];
				num[i] = num[i + 1];
				num[i + 1] = t;
			}
		}
	}
	

	printf("\n\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", num[i]);
	}
	printf("\n");

	return 0;
}