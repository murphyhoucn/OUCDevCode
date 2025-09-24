#include <stdio.h>
#include <math.h>

#define N 8

int main(void)
{
	int array[N];

	long int e;
	//printf("请输入8位二进制数：");
	scanf("%ld", &e);

	int i;
	for (i = 0; i < N; i++)
	{
		array[i] = e % 10;
		e /= 10;
	}
	/*
		for (i = 0; i < N; i++)
	{
		printf("before:%d\n", array[i]);
	}
	printf("\n");
*/


	for (i = 0; i < N; i++)
	{
		array[i] = array[i]*(int)pow((double)2, (double)(i));
	}
	/*
		for (i = 0; i < N; i++)
	{
		printf("before:%d\n", array[i]);
	}
	printf("\n");
	*/


	int sum=0;
	for (i = 0; i < N; i++)
	{
		sum += array[i];
	}

	printf("对应的十进制：%d\n", sum);

	return 0;
}