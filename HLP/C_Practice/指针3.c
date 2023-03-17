#include <stdio.h>

int main(void)
{
	int a[2] = { 1,2 };
	int b[2] = { 1,2 };
	int* p;
	int* q;

	p = a;
	q = a;

	printf("%d %d\n", *p++, *(q++));

	p = a;
	q = a;

	printf("%d %d", *p, *q);


	return 0;
}