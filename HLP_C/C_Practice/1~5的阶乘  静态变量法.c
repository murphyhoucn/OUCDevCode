#include <stdio.h>

int main()
{
	int f(int x);

	int i;
	for (i = 1; i < 6; i++)
	{
		printf("%d£¡=%d\n", i, f(i));
	}

	return 0;
}

int f(int x)
{
	static int f = 1;

	f *= x;

	return f;
}