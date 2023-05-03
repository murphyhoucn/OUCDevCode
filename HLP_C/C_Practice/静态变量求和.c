#include <stdio.h>

int main(void)
{
	int f(int a);

	int n;
	scanf_s("%d", &n);

	printf("%d\n", f(n));

	return 0;
}

int f(int a)
{
	static s = 1;

}