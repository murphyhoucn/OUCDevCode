#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	scanf_s("%d%*d%d", &a, &b, &c);
	printf("a=%d\tb=%d\tc=%d\n", a, b, c);

	return 0;
}