#include <stdio.h>

#define R 5
#define C 6

int main(void)
{
	int array[R][C];
	int temp_array[C];

	int i;
	int j;
	int k;

	int m;
	
	for (i=0;i<R;i++)
	{
		printf("Input 100%d 4 score:", i + 1);

		for (j = 0; j < C-1; j++)
		{
			if (j == 0)
			{
				array[i][0] = 1000 + i + 1;
			}
			else
			{
				//scanf_s("%d", &array[i][j]);
				scanf("%d", &array[i][j]);
			}
			
		}

		int temp_sum = 0;
		for (k = 1; k < C - 1; k++)
		{
			temp_sum += array[i][k];
		}
		array[i][C - 1] = temp_sum;
	}


	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%5d", array[i][j]);
			if (j == C - 1) { printf("\n"); }
		}
	}

	printf("========sort========\n");
	
	//int ii;

	for (j = 0; j < R - 1; j++)
	{
		//printf("j=%d\n", j);
		for (i = 0; i < R - 1 - j; i++)
		{
			//printf("i=%d\n", i);
			if (array[i][5] < array[i + 1][5])
			{
				for (m = 0; m < C; m++)
				{
					temp_array[m] = array[i+1][m];
				}
				/*for (ii = 0; ii < C; ii++)
				{
					printf("test:%d\n", temp_array[ii]);
				}*/
				for (m = 0; m < C; m++)
				{
					array[i+1][m] = array[i][m];
				}
				/*for (ii = 0; ii < C; ii++)
				{
					printf("test:%d\n", temp_array[ii]);
				}*/
				for (m = 0; m < C; m++)
				{
					array[i][m] = temp_array[m];
				}
				/*for (ii = 0; ii < C; ii++)
				{
					printf("test:%d\n", temp_array[ii]);
				}*/
			}
		}
	}

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%5d", array[i][j]);
			if (j == C - 1) { printf("\n"); }
		}
	}

	return 0;
}