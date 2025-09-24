#include <stdio.h>

int main()
{
	float v1;
	float v2;

	scanf_s("%f", &v1);
	scanf_s("%f", &v2);

	float result;
	float fenzi = (v2*v2 - v1 * v1)*0.87;
	float fenmu = 2 * 0.6*0.002;
	result = fenzi / fenmu;
	printf("%.3f", result);

	return 0;
}