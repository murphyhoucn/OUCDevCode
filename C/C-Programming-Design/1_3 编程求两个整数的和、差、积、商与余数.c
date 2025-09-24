#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("Enter num1:");
	//scanf_s("%d", &x);
	scanf("%d", &x);

	printf("Enter num2:");
	//scanf_s("%d", &y);
	scanf("%d", &y);

	printf("%d+%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	printf("%d/%d=%.2f\n", x, y, (double)x / y);
	printf("%d%%%d=%d\n", x, y, x % y);

	return 0;
}