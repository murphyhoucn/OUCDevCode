#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);

	int x1 = x / 100;
	//printf("%d\n", x1);


	int x2 = (x - x1 * 100) / 10;
	//printf("%d\n", x2);

	int x3 = ((x - x1 * 100) - x2 * 10);
	//printf("%d\n", x3);


	int x4 = x3 * 100 + x2 * 10 + x1;

	printf("%d",x4);
	return 0;
}