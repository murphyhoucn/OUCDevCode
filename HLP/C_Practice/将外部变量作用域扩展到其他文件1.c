#include <stdio.h>

int A;

int main()
{
	int power(int);
	int b = 3;
	int c, d, m;

	printf("enter the num a and its power m:\n");
	scanf_s("%d,%d", &A, &m);
	c = A * b;

	printf("%d*%d=%d\n", A, b, c);
	d = power(m);
	printf("%d**%d=%d\n", A, m, d);
	return 0;
}