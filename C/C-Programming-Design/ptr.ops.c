#include <stdio.h>

int main(void)
{
	int urn[5] = { 100,200,300,400,500 };

	int *ptr1;
	int *ptr2;
	int *ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value\tdereferenced pointer\tpointer address:\n");
	printf("ptr1=%p\t*ptr1=%d\t&ptr1=%p\n", ptr1, *ptr1, &ptr1);

	//÷∏’Îº”∑®
	ptr3 = ptr1 + 4;
	printf("\nadding ant integer to a pointer:\n");

	printf("ptr1+4=%p\t    *(ptr1+4)=%d\t     &ptr1+4=%p\n", ptr1+4, *(ptr1+4), &ptr1+4);
	ptr1++;


	return 0;

}