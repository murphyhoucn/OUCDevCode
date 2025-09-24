#include <stdio.h>

int main()
{
	int a;
	//scanf_s("%d", &a);
	scanf("%d", &a);

	do
	{
		printf("%d", a % 10);
		a /= 10;
	} while (a > 0);
	return 0;
}