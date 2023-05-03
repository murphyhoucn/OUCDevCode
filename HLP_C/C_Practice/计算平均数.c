#include <stdio.h>

int main(void)
{
	int i;
	float a[5];
	for (i = 0; i < 5; i++)
	{
		scanf_s("%f", &a[i]);
	}

	float sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += a[i];
	}

	printf("%.2f", sum / 5);

	return 0;
}