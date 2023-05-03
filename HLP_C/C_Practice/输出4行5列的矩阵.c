#include <stdio.h>


int main()
{
	int n = 0;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 6; j++, n++)

		{
			if (n % 5 == 0) { printf("\n"); }
			printf("%d\t", i*j);
		}
	}

	printf("\n");


	return 0;


}