#include <stdio.h>

int main(void)
{
	int a = 3;
	int* p;
	p = &a;

	printf("%d\n", *p++);
	printf("%d\n", *p);

	printf("__________________\n");
	int* q;
	q = &a;
	printf("%d\n", (*q)++);

	return 0;
}