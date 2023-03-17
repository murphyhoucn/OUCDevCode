#include <stdio.h>

#define N 10

int main(void)
{
	float array[N];

	int i;
	for (i = 0; i < N; i++)
	{
		scanf_s("%f", &array[i]);
	}


	for (i = 0; i < N / 2; i++)
	{
		printf("%d=%.2f\n", i+1,array[i + 5] - array[i]);
	}


	return 0;

}