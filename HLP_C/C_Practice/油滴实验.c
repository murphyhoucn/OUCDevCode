#include <stdio.h>
#include <math.h>

int main(void)
{
	long double fun(double yita, double vg, double rou, double g);

	double yita, vg, rou, g;
	
	int i ;

	yita = 1.83e-5;
	rou = 981;
	g = 9.797;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%lf",&vg);


		printf("%e\n", fun(yita, vg, rou, g));
	}
	

	return 0;
}
long double fun(double yita, double vg, double rou, double g)
{
	double x, y, z;
	x = 9 * yita*vg;
	y = 2 * rou*g;

	z = sqrt(x / y);

	return z;
}