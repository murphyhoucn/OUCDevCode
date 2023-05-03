#include <stdio.h>


int main()
{
	const double r = 0.07;
	const int n = 10;
	double p = 1;
	for (int i = 1; i < n+1; i++)
	{
		
		
		p *= (1 + r);
	}

	printf("%f\n", p);


	return 0;
}