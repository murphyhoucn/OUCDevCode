#include <stdio.h>

int main()
{
	int f(int);

	int a = 2;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", f(a));
	}

	return 0;
}


int f(int a)
{
	//auto int b = 0;
	int b = 0;
	static int c = 3;
	b += 1;
	c += 1;

	return (a + b + c);
}