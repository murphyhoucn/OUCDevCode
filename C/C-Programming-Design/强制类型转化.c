#include <stdio.h>
int main()
{
	printf("%d\n", (int)10.2);


	int a = 2.0;
	int b = 1.0;
	int i = (int)a / b;
	int j = (int)(a / b);
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}