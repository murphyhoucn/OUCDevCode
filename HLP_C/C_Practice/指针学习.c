#include <stdio.h>

int main(void)
{

	int a = 3;

	/*
	int* pointer;
	pointer = &a;   //�ȼ�
	*/
	int* pointer = &a;


	*pointer = 20;

	printf("%d", a);

	return 0;
}