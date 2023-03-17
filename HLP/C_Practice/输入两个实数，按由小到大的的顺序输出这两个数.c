#include <stdio.h>

int main()
{

	float a, b, t;

	scanf_s("%f,%f", &a, &b);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}

	printf("%f,%f", a, b);

	return 0;
}