#include <stdio.h>

int main(void)
{
	printf("Input F temp:");

	float f;
	scanf("%f", &f);
	//printf("C temp=%.3f\n", f);

	float c = (5.0 / 9.0) * (f - 32);

	printf("C temp=%.3f\n", c);

	return 0;
}
