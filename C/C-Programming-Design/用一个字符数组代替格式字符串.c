#include <stdio.h>

int main()
{
	char format[] = "a=%d\tb=%d\n";
	int a = 5;
	int b = 3;

	printf(format, a, b);

	return 0;
}