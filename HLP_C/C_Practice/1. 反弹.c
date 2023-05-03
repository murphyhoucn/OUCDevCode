#include <stdio.h>
#include <math.h>

int main(void)
{
	int m;
	int n;

	double fantan(int n, int m);

	//������n�׵ĸ߿����º󣬵�m�����ʱ��������·���Լ���m����غ󷴵��ĸ߶�
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

