#include <stdio.h>

int main(void)
{
	int odd=0;
	int even=0;

	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			even += i;
		}
		else
		{
			odd += i;
		}
		//printf("%d\n", i);
	}
	printf("odd=%d\neven=%d\n", odd, even);

	return 0;
}