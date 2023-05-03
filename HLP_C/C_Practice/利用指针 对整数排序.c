#include <stdio.h>

int main()
{
	int a, b;
	int *p1;
	int *p2;
	int *temp;

	printf("please enetr two integer number:\n");
	scanf_s("%d %d", &a, &b);

	p1 = &a;
	p2 = &b;

	if (a < b)
	{
		temp = p1;
		p1 = p2;
		p1 = temp;
	}

	printf("%d %d", *p1,*p2);

	return 0;
}