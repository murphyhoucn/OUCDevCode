#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int flag = 1;

	int i;

	float sum = 0;


	for (i = 1; i < n + 1; i++)
	{
		float temp1;
		float temp2 = 1.0f + 3.0f * (i - 1.0f);
		//printf("test:%f\n", temp2);

		temp1 = flag * (1.0f / temp2);
		//printf("test:%f\n", temp1);
		sum += temp1;

		flag = -1 * flag;

	}

	printf("sum=%.3f\n", sum);

	return 0;
}