#include <stdio.h>


int main(void)
{
	int fac(int x);
	int C;
	int m;
	int n;
	//scanf_s("%d%d", &n, &m);
	scanf("%d,%d", &m, &n);

	int x1 = fac(n);
	int x2 = fac(m);
	int x3 = fac(n - m);

	C = x1 / (x2*x3);
	printf("%d\n", C);

	return 0;
	
}


int fac(int x)
{
	int re;

	if (x < 0) { printf("error"); }
	else if (x == 0 || x == 1) { re = 1; }
	else
	{
		re = fac(x - 1)*x;
	}


	return re;
}