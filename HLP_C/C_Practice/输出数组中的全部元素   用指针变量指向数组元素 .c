#include <stdio.h>

int main()
{
	int a[10];

	int i;

	int *p;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (p = a; p < (a + 10); p++)
	{
		printf("%d\t", *p);
	}

	printf("\n");

	return 0;
}