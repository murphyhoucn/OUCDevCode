#include <stdio.h>
int main()
{
	int i = 0;
	int p;
	p = (int)&i;//ǿ������ת����ת����int����

	printf("%p\n", &i);
	printf("%p\n", p);
	return 0;
}