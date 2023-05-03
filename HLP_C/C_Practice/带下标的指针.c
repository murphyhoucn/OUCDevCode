#include <stdio.h>


int main()
{
	int a[3] = { 0,1,2 };

	int *p;
	p = &a[0];
	//p = a;
	printf("%d\n", *p[2]);

	int *q;
	q = &a[1];

	printf("%d\n", *q[1]);

	return 0;
}