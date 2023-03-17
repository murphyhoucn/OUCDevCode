#include <stdio.h>
int main()
{
	int i = 0;
	int p;
	p = (int)&i;//强制类型转化，转化成int类型

	printf("%p\n", &i);
	printf("%p\n", p);
	return 0;
}