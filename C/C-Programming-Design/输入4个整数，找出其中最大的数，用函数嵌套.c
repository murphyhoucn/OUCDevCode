#include <stdio.h>

int main()
{
	int max4(int a, int b, int c, int d);

	int a, b, c, d;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	printf("%d\n", max4(a, b, c, d));

	return 0;
}

int max4(int a, int b, int c, int d)
{
	int m;
	int max2(int x, int y);

	/*m = max(a, b);
	m = max(c, m);
	m = max(d, m);*/

	m = max2(d, max2(c, max2(a, b)));

	return m;
	
}

int max2(int x, int y)
{
	//printf("return=%d\n", x > y ? x : y);
	return x > y ? x : y;
}