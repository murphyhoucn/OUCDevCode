#include <stdio.h>

int main()
{
	char c[] = { "i am happy" };
	char a[] = "hello world";
	char b[10] = "china";

	printf("%c\n", c[0]);
	printf("%c\n", a[0]);
	printf("%c\n", b[8]);

	return 0;
}