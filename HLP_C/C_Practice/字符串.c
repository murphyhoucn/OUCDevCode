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
		printf("���\n");
	}
	else {
		printf("�����\n");
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