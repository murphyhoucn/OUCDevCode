#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	//scanf("%d", &n);
	int i;
	int s=0;
	double sum=0.0;
	for (i = 1; i <= n; i++)
	{
		s += i;
		sum += (1.0 / s);
	}

	printf("%.4f", sum);

	return 0;
}