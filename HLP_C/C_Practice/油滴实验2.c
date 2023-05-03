#include <stdio.h>
#include <math.h>

//double yita, vg, rou, g, b, r, l, p, d;

double yita = 1.83e-5;
double rou = 981;
double g = 9.797;
double b = 6.17e-6;
double p = 76.0;
double d = 5e-3;
double l = 1.5e-3;
double r = 1.3e-6;


int main(void)
{
	long double fun(double u, double t);

	double u;
	double t;


	int i;


	for (i = 0; i < 3; i++)
	{
		scanf_s("%lf%lf", &u,&t);


		printf("%E\n", fun(u,t));
	}
}

long double fun(double u, double t)
{
	long double A = 18 * 3.14 / (sqrt(2 * rou*g));
	long double B = pow(sqrt((yita*l) / (t*(1 + (b / p * r)))), 3);
	long double C = d / u;

	return A * B*C;
}