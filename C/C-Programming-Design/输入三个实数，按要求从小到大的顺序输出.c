#include <stdio.h>

int main()
{
	float a, b, c;
	float t;
	scanf_s("%f,%f,%f", &a, &b, &c);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a > c)
	{
		t = a;
		a = c;
		c = t;

	}

	if (b > c)
	{
		t = b;
		b = c;
		b = t;
	}

	printf("%5.2f,%5.2f,%5.2f", a, b, c);

	return 0;
}