#include <stdio.h>
#include <string.h>

int main()
{
	char a[10];
	char b[10];
	strcpy_s(a,sizeof(a)/sizeof(b[0]), "hello");
	strcpy_s(b, sizeof(b) / sizeof(b[0]), a);

	printf("%s\n", b);

	return 0;
}