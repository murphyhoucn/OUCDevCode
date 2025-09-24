#include <stdio.h>
#include <string.h>

#define N 5

int main(void)
{
	int a[N] = { 1,5,9,8,7 };
	int b[N];
	memcpy(b,a, sizeof(a));

	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d\n", b[i]);
	}

	return 0;
}