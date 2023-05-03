#include <stdio.h>
int main()
{
	int a = 6;
	int b = 5;
	int c ;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d",a,b);
	return 0;
}