#include <stdio.h>

int main()
{
	int x;
	//scanf_s("%d", &x);
	scanf("%d", &x);
	int temp;
	int inv=0;
	do
	{
		temp = x % 10;
		//printf("%d\n", temp);
		inv = inv * 10 + temp;
		x /= 10;
	} while (x > 0);

	//printf("%d\n", inv);

	do
	{
		printf("%d", inv % 10);
		inv /= 10;
		if (inv > 0)
		{
			printf("\n");
		}
	} while (inv > 0);
	return 0;
}