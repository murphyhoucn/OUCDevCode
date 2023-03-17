#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, disc, x1, x2, p, q;

	scanf_s("%lf%lf%lf", &a, &b, &c);

	disc = b * b - 4.0*a*c;

	if (disc < 0)
	{
		printf("нч╫Б");
	}
	else
	{
		p = -b / (2.0*a);
		q = sqrt(disc) / (2.0*a);

		x1 = p + q;
		x2 = p - q;

		printf("x1=%lf\tx2=%lf\n", x1, x2);
	}


	return 0;
}