#include <stdio.h>
int main()
{
	int i = 6;
	int *p = &i;
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);

	printf("i=%d\n",i);
	printf("&i=%p", &i);
	return 0;
}