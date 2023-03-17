#include <stdio.h>


int main()
{
	int a, b;

	scanf_s("%d,%d", &a, &b);

	int max(int x, int y);
	
	max(a, b);

	return 0;
}

int max(int x,int y)
{

	printf("%d\n", x);
	printf("%d\n", y);
	if (x > y) { printf("%d\n", x); }
	else { printf("%d\n", y); }
}