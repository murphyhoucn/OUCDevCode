#include <stdio.h>

#define N 100

int main(void)
{

	int result(float* p, int n);

	int n;
	scanf_s("%d", &n);

	float score[N];

	int i;
	for (i = 0; i < n; i++)
	{
		scanf_s("%f", &score[i]);
	}

	int number=result(score, n);

	printf("the number is :%d\n", number);

	return 0;
}

int result(float* p, int n)
{
	int i;
	float sum = 0;

	for (i = 0; i < n; i++  )
	{
		sum += *(p + i);
	}


	int count = 0;
	printf("sum=%f\n", sum);

	float average = sum / n;

	printf("average=%f\n", average);

	for (i = 0; i < n; i++)
	{
		if (*(p+i)>=average)
		{ 
			count++;
		}
	}

	return count;
}