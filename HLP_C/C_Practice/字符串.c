#include <stdio.h>
int main()
{
	char c;
	char d;
	char e;
	c = 1;
	d = '1';
	e = 'A';

	if (c == d) {
		printf("相等\n");
	}
	else {
		printf("不相等\n");
	}

	printf("c=%d\n", c);
	printf("\n");
	printf("d=%d\n", d);
	printf("d=%c\n", d);
	printf("d='%c'\n", d);
	printf("\n");
	printf("e=%d\n", e);
	return 0;

}