#include <stdio.h>

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}

	printf("\n");
	return 0;
}