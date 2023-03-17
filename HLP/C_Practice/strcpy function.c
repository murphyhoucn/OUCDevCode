#include <stdio.h>
#include <string.h>

#define N 10

int main(void)
{
	char a[N];
	char b[N];

	gets_s(a, 10);
	int len = strlen(a) + 1;
	strcpy_s(b,len,a);
	printf("a=%s\n", a);
	printf("b=%s\n", b);

	return 0;


}