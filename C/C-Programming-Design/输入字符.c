#include <stdio.h>

int main(void)
{
	char c;
	scanf_s("%c", &c, sizeof(c));

	printf("%c", c);

	return 0;
}