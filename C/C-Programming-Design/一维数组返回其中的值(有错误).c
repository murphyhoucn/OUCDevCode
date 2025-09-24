#include <stdio.h>

#define N 3

float max;
float min;

int main(void)
{
	float average(float arr[], int n);

	float array[N];
	int i;
	for (i = 0; i < N; i++)
	{
		scanf_s("%f", &array[i]);
	}
	/*
		for (i = 0; i < N; i++)
	{
		printf("test:%f\n", array[i]);
	}
	*/


	printf("average=%f max=%f min=%f", average(array, N),max,min);

	return 0;
}

float average(float arr[], int n)
{
	int i;
	float sum = 0;
	max = arr[0];
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		
		float maxfun(float a, float b);
		float minfun(float a, float b);
		max = maxfun(arr[i], max);
		min = minfun(arr[i], min);

		sum += arr[i];
	}

	return (sum / n);

}

float maxfun(float a, float b)
{
	return a > b ? a : b;
}

float minfun(float a, float b)
{
	return a < b ? a : b;
}