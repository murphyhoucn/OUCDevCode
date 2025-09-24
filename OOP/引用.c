#include <stdio.h>
int main()
{
	int n = 0;
	int & r = n;
	r = 4;
	printf("%d\n", n);
	printf("%d\n", r);
	n = 5;
	printf("%d\n", r);
	return 0;
}