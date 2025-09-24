#include <stdio.h>

int main()
{
	void exchange(int *p1, int *p2, int*p3);

	int a, b, c;

	printf("please enter 3 integer numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	int *p1;
	int *p2;
	int *p3;

	p1 = &a;
	p2 = &b;
	p3 = &c;

	exchange(p1, p2, p3);

	printf("%d\t%d\t%d\n", a, b, c);

	return 0;
}

void exchange(int *p1, int *p2, int *p3)
{
	void swap(int *q1, int *q2);

	if (*p1 < *p2) { swap(p1, p2); }
	if (*p1 < *p3) { swap(p1, p3); }
	if (*p2 < *p3) { swap(p2, p3); }
}

void swap(int *q1, int *q2)
{
	int temp;
	temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}