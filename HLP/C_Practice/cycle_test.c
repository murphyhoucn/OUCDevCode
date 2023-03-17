#include <stdio.h>

int main(void)
{

	printf("%zd\n", sizeof(char));
	char string0[14] = { "I LOVE CHINA!" };
	puts(string0);
	printf("\n");
	char string1[13] = { "I LOVE CHINA!" };
	puts(string1);
}