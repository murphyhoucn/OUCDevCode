#include <stdio.h>

#define N 100

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[N][N];
	int i;
	int j;
	for (i = 1; i <= n * n; i++)
	{
		int temp1 = ((i - 1) / n); //hang

		int temp2 = ((i - 1) % n);

		array[temp1][temp2] = i;

	}

	int (*p)[N];
	p = array;

	for (i = 0; i < n; i++) //ÁÐ
	{
		for (j = n - 1; j >= 0; j--) //ÐÐ
		{
			printf("%3d ",*(*(p+j)+i));
			//printf("%d %d", i, j);
		}
		printf("\n");
	}

	return 0;
}