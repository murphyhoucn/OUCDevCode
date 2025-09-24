#include <stdio.h>

int main()
{
	void swap(int *x, int *y);

	int a, b;

	
	scanf_s("%d %d", &a, &b);

	int *p1;
	int *p2;
	p1 = &a;
	p2 = &b;

	swap(p1, p2);

	printf("a=%d\nb=%d\n", a,b);
}

void swap(int *x, int *y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;

}