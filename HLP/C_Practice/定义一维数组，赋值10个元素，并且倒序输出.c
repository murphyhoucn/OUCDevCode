#include <stdio.h>

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}

	for (int j = 9; j >= 0; j--)
	{
		printf("%d  ", a[j]);
	}

	return 0;
}