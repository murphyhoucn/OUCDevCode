#include <stdio.h>

int main()
{
	float add(float, float);

	float a, b;

	scanf_s("%f,%f", &a, &b);

	printf("%f\n", add(a, b));

	return 0;
}

float add(float a, float b)
{
	float c = a + b;

	return c;
}