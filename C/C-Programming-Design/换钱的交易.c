#include <stdio.h>

#include <math.h>

int main(void)
{
	double poor(int n);
	int rich(int n);


	int day;
	scanf("%d", &day);

	printf("%d\n", rich(day));
	printf("%d", (int)poor(day));

	return 0;	
}

int rich(int n)
{

	return 100000 * n;
}

double poor(int n)
{
	double sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += 1*pow((double)2, (double)i);
	}

	return sum;
}