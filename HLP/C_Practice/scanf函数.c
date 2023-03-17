#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d,%d,%d", &a, &b, &c);
	printf("a=%d\tb=%d\tc=%d\n", a, b, c);


	int d, e, f;
	scanf_s("%d%d%d", &d, &e, &f);
	printf("d=%d\te=%d\tf=%d\n", d, e, f);


	int g, h, i;

	scanf_s("g=%d,h=%d,i=%d", &g, &h, &i);
	printf("g=%d\th=%d\ti=%d\n", g, h, i);

	return 0;
}