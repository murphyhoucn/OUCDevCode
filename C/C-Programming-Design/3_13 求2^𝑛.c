#include <stdio.h>
#include <math.h>

int main(void)
{

	void powfun(int x);

	long int x;
	scanf_s("%ld", &x);

	int x1 = x;

	while (x1 > 0)
	{
		int temp = x1 % 10;
		powfun(temp);
		x1 /= 10;
	}

	return 0;
	
}

void powfun(int x)
{
	int t;
	static int sum = 0;



}