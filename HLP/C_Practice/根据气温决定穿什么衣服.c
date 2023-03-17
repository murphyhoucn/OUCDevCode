#include <stdio.h>

int main()
{
	float t;
	printf("please in enter the temp:");

	scanf_s("%f", &t);

	if (t < 10) { printf("you need wear your down-jacket"); }
	else if (t >= 10 && t < 20) { printf("you need wear two clothes"); }
	else { printf("you can wear you shirt and skirt"); }

	return 0;
}