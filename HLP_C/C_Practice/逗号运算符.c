#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	printf("a=%d\n", 3 * a, 3 * a);
	printf("b=%d\n", (b=b * 3, b * 3));
	printf("c=%d\n", c = (c * 3, c * 3));
	

	return 0;
}