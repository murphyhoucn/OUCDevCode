#include <stdio.h>

int main(void)
{

	int a = 3;

	/*
	int* pointer;
	pointer = &a;   //µÈ¼Û
	*/
	int* pointer = &a;


	*pointer = 20;

	printf("%d", a);

	return 0;
}