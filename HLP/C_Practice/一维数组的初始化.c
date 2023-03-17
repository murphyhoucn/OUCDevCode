#include <stdio.h>

int main()
{
	int i;

	int a[5] = { 1,2,3,4,5 };
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	int b[5] = { 1,2,3 };
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", b[i]);
	}
	printf("\n");


	int c[5] = {0};
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", c[i]);
	}
	printf("\n");


	int d[] = { 1,2,3,7,8 };
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", d[i]);
	}
	printf("\n");


	return 0;
}