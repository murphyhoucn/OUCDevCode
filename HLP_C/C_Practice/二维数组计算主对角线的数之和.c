#include <stdio.h>
#define A 3 //row
#define B 3 //clumn
int main(void)
{
	int array[A][B];

	int i;
	int j;
	for (i = 0; i < A; i++)
	{
		for (j = 0; j < B; j++)
		{
			scanf_s("%d",&array[i][j]);
			//scanf("%d", &array[i][j]);
		}
	}
	int sum = 0;


	for (i = 0; i < A; i++)
	{
		for (j = 0; j < B; j++)
		{
			if (i == j) { sum += array[i][j]; }
		}
	}
	printf("%d", sum);

	return 0;
	
}