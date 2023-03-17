#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int x1 = x / 16;
	int x2 = x % 16;
	int x3 = x1 * 10 + x2;
	printf("%d", x3);
	return 0;
}