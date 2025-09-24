#include<stdio.h>

int main(void)
{
	int f(int a);

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
	int b = 0;
	static c = 3;

	b++;
	c++;

	return (a + b + c);
}