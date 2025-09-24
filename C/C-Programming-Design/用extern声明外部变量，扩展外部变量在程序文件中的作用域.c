#include <stdio.h>

int main()
{
	int max();

	extern int A, B, C;
	printf("please enter three integer numbers:\n");
	scanf_s("%d %d %d", &A, &B, &C);

	printf("max is %d\n", max());
}

int A, B, C;

int max()
{
	int m;
	m = A > B ? A : B;

	if (C > m) { m = C; }

	return m;
}