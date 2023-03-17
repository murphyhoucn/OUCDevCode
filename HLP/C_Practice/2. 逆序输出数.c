#include <stdio.h>
#define N 5

int main(void)
{
	int array[N];

	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}


	/*
		for (i = 0; i < N; i++)
	{
		printf("%d ", array[i]);
	}
	
	*/


	for (i = N - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}

	return 0;


}
