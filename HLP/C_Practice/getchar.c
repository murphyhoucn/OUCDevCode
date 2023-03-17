#include <stdio.h>


//理解缓冲区的意思


int main()
{
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);

	putchar('\n');
	

	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);

	putchar('\n');


	return 0;
}