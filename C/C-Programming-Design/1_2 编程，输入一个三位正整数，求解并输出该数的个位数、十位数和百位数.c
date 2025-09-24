#include <stdio.h>

int main(void)
{
	int a;
	//scanf_s("%d", &a);

	scanf("%d", &a);

	while (a > 0)
	{
		int temp;
		temp = a % 10;
		printf("%d ", temp);

		a /= 10;
	}

	return 0;

}