#include <stdio.h>

int main()
{
	double sum = 0.0;
	
	for (int i = 1; i < 5; i++)
	{
		printf("%d\n", i);
		if (i % 2 == 0) { sum += -1 * 1 / i; }
		else { sum += 1 / i; }
	}

	printf("%d\n", sum);

	return 0;
}