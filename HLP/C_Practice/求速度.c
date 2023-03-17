
#include <stdio.h>

int main(void)
{
	float a;
	scanf_s("%f", &a);
	float result = 0.01 / a * 1000;
	printf("%.3f", result);

	return 0;
}