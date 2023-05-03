#include <stdio.h>

#define SIZE 10

int main(void)
{
	int array[SIZE];

	scanf_s("%d", array);

	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}