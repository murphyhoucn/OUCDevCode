#include <stdio.h>

int main()
{
	long long int multiplication = 1;


	for (int i = 1; i < 21; i++)
	{
		printf("%d\n", i);
		multiplication *= i;
		//printf("%d\n", multiplication);
	}

	printf("%d\n", multiplication);

	return 0;
}