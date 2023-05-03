#include <stdio.h>

int main(void)
{
	int n;
	double sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	double i = 1;
	int count = 0;

	while (count < n)
	{

		sum += (1.0 / i);
		i += 2;
		count++;
	}

	printf("sum=%.6f", sum);

	return 0;
}