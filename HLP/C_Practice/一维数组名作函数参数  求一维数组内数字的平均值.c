#include <stdio.h>

int main()
{
	float score[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
	}

	float aver;

	float average(float array[10]);

	aver = average(score);

	printf("%f\n", aver);

	return 0;
}

float average(float array[10])
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}

	return (sum / 10.0);
}
