#include <stdio.h>
#include <string.h>

#define N 10

int main(void)
{
	char a[N];
	char b[N];
	gets_s(a, 10);
	gets_s(b, 10);


	printf("%d\n", strcmp(a, b));

	return 0;
}