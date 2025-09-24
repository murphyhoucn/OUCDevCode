#include <stdio.h>

int main()
{
	int a, b, c, d;
	a = 3;
	b = 3;
	c = 3;
	d = 3;


	printf("%d\n", a);
	printf("%d\n", a++);
	printf("%d\n", a);
	printf("\n");

	printf("%d\n", c);
	printf("%d\n", c--);
	printf("%d\n", c);
	printf("\n");

	printf("%d\n", b);
	printf("%d\n", ++b);
	printf("%d\n", b);
	printf("\n");

	

	printf("%d\n", d);
	printf("%d\n", --d);
	printf("%d\n", d);
	printf("\n");

	return 0;
}