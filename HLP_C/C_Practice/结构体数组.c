#include <stdio.h>

#define N 3
int main(void)
{
	struct A
	{
		int a;
		int b;

	}a[N];

	int i;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i].a);
		scanf_s("%d", &a[i].b);
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\t%d\n", a[i].a, a[i].b);
	}


	return 0;

}