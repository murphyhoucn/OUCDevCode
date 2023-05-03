#include <stdio.h>

int main()
{
	char x;
	x = getchar();
	//printf("%c\n", x);
	x = x - 32;
	printf("%c,%d",x,x);

	return 0;
}