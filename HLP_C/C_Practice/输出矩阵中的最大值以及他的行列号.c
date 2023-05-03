#include <stdio.h>

int main()
{
	int i, j;
	int row = 0, colum = 0;
	int max;

	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };

	max = a[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	}


	printf("max=%d\nrow=%d\ncolum=%d\n", max, row, colum);

	return 0;
}