#include <stdio.h>

int main()
{
	float max(float x, float y);
	float a, b;

	scanf_s("%f,%f", &a, &b);

	printf("%f\n", max(a, b));
}


float max(float x, float y)
{
	float z = x > y ? x : y;

	//printf("%f,%f\n", x, y);

	return z;
}