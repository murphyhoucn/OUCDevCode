#include <stdio.h>

int main(void)
{

	int a = 1;
	//int array[2] = { 1,2 };
	int* p;
	int* q;

	//p = &a;
	//q = &a;

	//printf("a:%d %d\n", *p++, *(q++));

	p = &a;
	q = &a;
	printf("a:%d %d\n", *p,(*q)++);


	int b = 1;
	printf("b:%d %d\n", b, b++);

	int c = 1;
	printf("c:%d %d %d", c, ++c, c++);

	return 0;

}