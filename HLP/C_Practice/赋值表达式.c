#include <stdio.h>

int main()
{
	int a = 5;
	int b = a;
	int c = b;

	printf("a=%d\tb=%d\tc=%d\n", a, b, c);
	printf("\n");

	int x, y, z;
	x = 6;
	y = z = x;
	printf("x=%d\ty=%d\tz=%d\n", x, y, z);
	printf("\n");

	int e, f, g;
	f = 0;
	e = f + (g = 5);
	printf("e=%d\tf=%d\tg=%d\n",e, f, g);
	printf("\n");


	int h, i, j;
	h = (i = 4) + (j = 6);
	printf("h=%d\ti=%d\tj=%d\n", h, i, j);
	printf("\n");


	int k, l, m;
	k = (l = 10) / (m = 2);

	printf("k=%d\tl=%d\tm=%d\n", k, l, m);
	printf("\n");


	return 0;

	
}