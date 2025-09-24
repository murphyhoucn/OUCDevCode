#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k;
	int n = 0;

	for (i = 100; i < 201; i++)
	{
		k = sqrt(i);
		for (j = 2; j < k + 1; j++)
		{
			if (i%j == 0) { break; }
		}

		if (j >= k+1)
		{
			printf("%d\t", i); 
			n++;

			if (n % 10 == 0) { printf("\n"); }
		}

		
	}

	return 0;
}