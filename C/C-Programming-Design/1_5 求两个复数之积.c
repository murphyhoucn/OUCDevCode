#include <stdio.h>

int main(void)
{
	printf("Input a1,a2,b1,b2:");

	int a1, a2, b1, b2;

	//scanf_s("%d %d %d %d", &a1, &a2, &b1, &b2);

	scanf("%d %d %d %d", &a1, &a2, &b1, &b2);


	int real = a1 * b1 - a2 * b2;
	int ima = a1 * b2 + a2 * b1;


	printf("(%d+%di)*(%d+%di)=%d+%di", a1, a2, b1, b2, real, ima);

	return 0;

}