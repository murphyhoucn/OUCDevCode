#include <stdio.h>

int main()
{
	int a[10];
	int i;
	int *p;

	p = a;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", p++);
	}

	p = a;

	for (i = 0; i < 10; i++,p++)
	{
		printf("%d\t", *p);
	}

	printf("\n");

	return 0;
}