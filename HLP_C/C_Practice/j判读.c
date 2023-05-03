#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 3;
	int c = 4;

	printf("%d\n", c = a + b);

	int d = 5;
	printf("%d\n", d = a + b);

	return 0;

}