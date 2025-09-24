#include <stdio.h>

int main(void)
{
	int a[2][3] = { {0,1,2},{1,2,3} };
	int b[3][2] = { 0 };

	int i;
	int j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			b[j][i] = a[i][j];
			if (j == 2) { printf("\n"); }
		}
	}
	printf(" \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", b[i][j]);
			if (j == 1) { printf("\n"); }
		}
	}

	return 0;
}