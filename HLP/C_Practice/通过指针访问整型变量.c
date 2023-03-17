#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("please enter two integer number:\n");
	scanf_s("%d %d", &a, &b);

	int *p1;
	int *p2;
	p1 = &a;
	p2 = &b;

	printf("%d\n%d\n", *p1, *p2);

	return  0;
}