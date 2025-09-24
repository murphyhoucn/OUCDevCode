#include <stdio.h>

int main()
{
	char a[] = "i am a boy";
	char *p;
	p = a;

	printf("%c\n", p[3]);

	char *b = "i am a dog";
	printf("%c\n", b[3]);

	return 0;
}