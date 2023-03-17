#include <stdio.h>

int main(void)
{
	int sum1(int *q1);
	double sum2(int *q2);

	int n;
	
	//scanf_s("%d", &n);
	scanf("%d", &n);

	int *p2;
	p2 = &n;


	printf("%.4f\n", sum2(p2));

	return 0;
}

double sum2(int *q2)
{
	double xx = 0;
	int i;

	int *p1;
	p1 = &i;


	for (i = 1; i < *q2 + 1; i++)
	{
		xx += (1.0 / (sum1(p1)));
	}
	//printf("xx=%f\n", xx);

	return xx;
}

int sum1(int *q1)
{
	int i;
	int x = 0;

	for (i = 1; i < *q1+1; i++)
	{
		x += i;
	}
	//("x=%d\n", x);

	return x;
}