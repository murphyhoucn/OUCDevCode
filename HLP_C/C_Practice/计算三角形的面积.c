#include <stdio.h>
#include <math.h>

int main()
{
	double area;
	double a, b, c, s;

	scanf_s("%lf %lf %lf", &a, &b, &c);
	printf("%f %f %f\n", a, b, c);

	s = (a + b + c) / 2;

	area = sqrt(s*(s - a)*(s - b)*(s - c));

	printf("area=%f\tarea=%f\n", area);

	return 0;
}