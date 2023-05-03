#include <stdio.h>

int main()
{
	int *p1;
	int *p2;
	int *p;
	int a;
	int b;


	printf("please enter two integer number:");
	scanf_s("%d %d", &a, &b);

	p1 = &a;
	p2 = &b;

	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}

	printf("a=%d\tb=%d\n", a, b);

	printf("max=%d\tmin=%d\t", *p1, *p2);

	return 0;
}