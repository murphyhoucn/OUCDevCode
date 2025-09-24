#include <stdio.h>

int main()
{
	int max_value(int array[][4]);

	int a[3][4];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("the max in the arrar a is %d\n", max_value(a));

	return 0;
}

int max_value(int array[][4])
{
	int maxnum = array[0][0];

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (array[i][j] > maxnum)
			{
				maxnum = array[i][j];
			}
		}
	}

	return maxnum;
}