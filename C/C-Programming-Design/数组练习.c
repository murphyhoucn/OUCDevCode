#include <stdio.h>
#define SIZE 10
int main(void)
{
	int array[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &array[i]);
	}

	

	printf("%d", array[4]);
	return 0;
}