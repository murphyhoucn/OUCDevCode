#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	double disc;
	double x1, x2;
	double p, q;

	scanf_s("%lf %lf %lf", &a, &b, &c);

	disc = b * b - 4 * a*c;
	p = -b / (2.0*a);
	q = sqrt(disc) / (2.0*a);

	x1 = p + q;
	x2 = p - q;

	printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);

	return 0;



}