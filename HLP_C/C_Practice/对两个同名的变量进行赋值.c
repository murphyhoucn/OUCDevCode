#include <stdio.h>

int a = 200;

int main(void)
{
	int c = 100;

	if (c == 100)
	{
		int c = 10;
		printf("if:c=%d\n", c);
		printf("if:a=%d\n", a);
	}
	printf("main:c=%d\n", c);
	printf("main:a=%d\n", a);

	return 0;
}