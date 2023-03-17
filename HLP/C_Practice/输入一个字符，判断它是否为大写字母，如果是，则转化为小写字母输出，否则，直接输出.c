#include <stdio.h>

int main()

{
	char a;
	scanf_s("%c", &a);

	char b;
	b = (a >= 'A'&&a <= 'Z') ? a + 32 : a;

	printf("%c\n", b);

	return 0;
}