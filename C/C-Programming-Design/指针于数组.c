#include <stdio.h>

#define N 10

int main(void)
{
	int a[N] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p;
	p = a;

	//printf("test:%p\n", p);
	
	*(p + 4) += 5;

	int i;

	for (i = 0; i < N; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}