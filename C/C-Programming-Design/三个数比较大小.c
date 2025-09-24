#include <stdio.h>

int main(void)
{
	int a, b, c;

	int max4(int x, int y, int z);
	printf("Input 3 num:");
	//scanf_s("%d %d %d", &a, &b, &c);

	scanf("%d %d %d", &a, &b, &c);

	printf("max=%d\n", max4(a, b, c));

	return 0;



}

int max4(int x, int y, int z)
{
	int max2(int a, int b);

	return max2(z, max2(x, y));
}

int max2(int a, int b)
{
	return a > b ? a : b;
}