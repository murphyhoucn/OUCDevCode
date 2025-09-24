#include <stdio.h>

int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };

	//int a[2][3];
	//a[2][3] = { {1,2,3},{4,5,6} };


	int b[3][2];
	int i, j;

	

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	printf("\n");



	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}