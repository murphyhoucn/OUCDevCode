#include <stdio.h>
#include <math.h>

int main(void)
{
	int m;
	int n;

	double fantan(int n, int m);

	//求该球从n米的高空落下后，第m次落地时共经过的路程以及第m次落地后反弹的高度
	scanf("%d %d", &n, &m);

	printf("%.2f\n", fantan(n, m));

	double temp = n * pow(0.25, m);
	
	printf("%.2f", temp);

	return 0;

}

double fantan(int n, int m)
{
	double sum = n;
	int i;
	for (i = 1; i < m; i++)
	{
		sum += n * pow(0.25, i) * 2;
	}

	return sum;
}

