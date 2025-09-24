#include <stdio.h>

float Max = 0;
float Min = 0;

int main()
{
	float average(float array[], int n);

	float ave;
	float score[10];

	int i;

	printf("enter 10 scores:\n");

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &score[i]);
	}
	


	ave = average(score, 10);

	printf("max=%6.2f\tmin=%6.2f\taverage=%6.2f\n", Max, Min, ave);
}

float average(float array[], int n)
{
	int i;
	float sum = 0.0;
	float ave = 0.0;
	Max = array[0];
	Min = array[0];

	for (i = 0; i < n; i++)
	{
		sum += array[i];
		if (Max < array[i]) { Max = array[i]; }
		else if (Min > array[i]) { Min = array[i]; }
	}

	ave = sum / n;

	return (ave);
}