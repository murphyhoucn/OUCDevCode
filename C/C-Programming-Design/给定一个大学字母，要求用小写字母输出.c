#include <stdio.h>

int main()
{
	char c1;
	char c2;
	scanf_s("%c", &c1);
	c2 = c1 + 32;
	printf("%c\n", c2);
	printf("%d\n", c2);

	return 0;
}