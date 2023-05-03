#include <stdio.h>

#define N 100

int main(void)
{
	char a[] = "hello world";
	char b[N];

	char *pa;
	char *pb;

	pa = a;
	pb = b;
	
	int i;

	for (; *pa!= '\0'; pa++,pb++)
	{
		*pb = *pa;
	}

	*pb = '\0';


	puts(a);
	printf("\n");
	puts(b);

	return 0;
}