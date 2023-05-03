#include <stdio.h>

int main()

{
	int a, b;

	scanf_s("%d,%d", &a, &b);

	int max;
	max = (a > b) ? a : b;
	printf("max=%d\n", max);


	return 0;
}