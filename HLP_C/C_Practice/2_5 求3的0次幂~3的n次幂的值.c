#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int i;

	for (i = 0; i < n + 1; i++)
	{
		printf("pow(3,%d)=%d\n", i, (int)pow(3.0, (double)i));
	}

	return 0;
}