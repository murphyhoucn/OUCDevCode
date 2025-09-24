#include <stdio.h>
#include <string.h>

#define N 100
int main(void)
{
	int array[N];

	memset(array, 0, sizeof(array));

	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}