#include <stdio.h>

int main()
{
	char str[] = "china";
	puts(str);
	//putchar('\n');

	printf("%s\n", str);

	char str1[] = { "beijing\nchina" };
	puts(str1);
	//putchar('\n');
	printf("%s\n", str);

	return 0;
}