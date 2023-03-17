#include <stdio.h>


int main()
{
	int sum = 0;
	int i = 1;
	
	while (i < 101)
	{
		sum += i;
		i++;
	}

	printf("sum=%d\n", sum);


	return 0;
}