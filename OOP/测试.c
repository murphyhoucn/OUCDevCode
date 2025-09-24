#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);

	c = (double)a / (double)b;
	printf("%f\n", (double)c);

	return 0;
}