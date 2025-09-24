#include <stdio.h>


int main()
{

	int f(int x);

	int i;
	for (i = 1; i < 6; i++)
	{
		printf("%d!=%d\n", i, f(i));
	}


}

int f(int x)
{

	int i;

	int jiecheng = 1;
	for (i = 1; i < x + 1; i++)
	{
		jiecheng *= i;
	}

	return (jiecheng);
}