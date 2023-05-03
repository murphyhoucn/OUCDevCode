#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("math=");
	scanf("%d", &a);
	//scanf_s("%d", &a);

	printf("eng=");
	scanf("%d", &b);
	//scanf_s("%d", &b);

	printf("comp=");
	scanf("%d", &c);
	//scanf_s("%d", &c);

	printf("average=%.2f", (a + b + c) / 3.0);

	return 0;
}