#include <stdio.h>

int main(void)
{
	int fac(int i);

	int x;
	scanf("%d", &x);

	int i;
	double sum = 1.0;


	for (i = 1; i < x + 1; i++)
	{
		sum += 1/(double)fac(i);
	}

	printf("e=%.4lf", sum);

	return 0;
}

int fac(int i)
{
	if (i == 1) { return 1; }
	else
	{
		return i * fac(i - 1);
	}
}