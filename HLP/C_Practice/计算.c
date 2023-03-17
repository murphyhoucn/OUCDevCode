#include <stdio.h>

int main()
{
	int a = 8; 
	a += a %= 2 + a / a;

	printf("%d", a);

	return 0;
	

}