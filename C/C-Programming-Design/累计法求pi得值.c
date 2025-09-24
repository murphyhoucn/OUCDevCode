#include <stdio.h>
#include <math.h>


int main()
{
	int sign = 1;

	double pi = 0.0;
	double i = 1.0;
	double term = 1.0;

	while (fabs(term) >= 1e-6)
	{
		pi += term;
		i += 2;
		sign = -sign;
		term = sign / i;
		//printf("%f\n", i);


	}
	
	pi = 4 * pi;
	printf("%10.8f\n", pi);

	return 0;
}