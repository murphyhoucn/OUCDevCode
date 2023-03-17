#include <stdio.h>

int main(void)
{
	void fun();

	fun();

	return 0;
}

void fun()
{
	int i=1;
	for (i = 1; i < 26; i++)
	{
		printf("* ");
		if (i%5==0)
		{
			printf("\n");
		}
	}
}