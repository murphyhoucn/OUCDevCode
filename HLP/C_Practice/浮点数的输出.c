#include <stdio.h>

int main()
{
	float a = 1.0;
	double b = 2.1;

	printf("%100.6f\n", a);
	printf("%100.15f\n", b);

	return 0;
}