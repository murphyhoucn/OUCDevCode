#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = 4;

	int* p1;
	int* p2;

	p1 = &a;
	p2 = &b;

	int* p;

	p=p1;
	p1 = p2;
	p2 = p;

	printf("%d %d\n", a, b);
	printf("%d %d\n", *p1, *p2);

	return 0;

}