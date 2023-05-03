#include <stdio.h>

#define N 100

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[N][N];
	int i;
	int j;
	for (i = 1,j=1; i <= n*n; i++)
	{
		int temp1 = ((i-1) /n); //hang

		int temp2 = ((i - 1) % n);

		array[temp1][temp2] = i;

	}

	/*
		for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("test:%4d  ", array[i][j]);
		}
		printf("\n");
	}

		printf("___________________\n");
	
	*/



	
	for (i = 0; i < n; i++) //ÁÐ
	{
		for (j = n - 1;j>=0; j--) //ÐÐ
		{
			printf("%3d ", array[j][i]);
			//printf("%d %d", i, j);
		}
		printf("\n");
	}

	

	return 0;
}