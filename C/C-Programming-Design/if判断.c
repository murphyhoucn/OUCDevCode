#include <stdio.h>

int main(void)
{
	int x= 2;
	int y = -1;
	int z = 5;

	if (x < y)
		if (y < 0)
			z = z - 1;
		else
			z = z + 1;
	printf("%d", z);

	return 0;
}