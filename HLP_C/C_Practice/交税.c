#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	a > 5000 ? printf("tax") : printf("no tax");

	return 0;
}
