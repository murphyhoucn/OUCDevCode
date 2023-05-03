#include <stdio.h>

int main(void)
{
	int a[3][4];
	int i;
	int j;

	printf("a[0]=%d\n", &a[0]);
	printf("%d\n", &a[0][0]);
	printf("%d\n", &a[0][1]);
	printf("%d\n", &a[0][2]);
	printf("%d\n", &a[0][3]);

	printf("a[1]=%d\n", &a[1]);
	printf("%d\n", &a[1][0]);
	printf("%d\n", &a[1][2]);
	printf("%d\n", &a[0][3]);

	printf("a[2]=%d\n", &a[2]);
	printf("%d\n", &a[2][0]);
	printf("%d\n", &a[2][1]);
	printf("%d\n", &a[2][2]);
	printf("%d\n", &a[2][3]);



	return 0;

}