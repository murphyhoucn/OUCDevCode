#include <stdio.h>


int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	double sum = 0.0;
	int i;
	int count = 0;
	for (i = 1; count<n;)
	{
		//printf("test:%d\n", i);
		sum += 1.0 / i;
		count++;
		i += 2;
		
	}

	printf("sum=%.6lf", sum);

	return 0;
}