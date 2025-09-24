#include <stdio.h>

#define N 100

int main(void)
{
	char a[] = "i am a student";

	char b[20];

	int i;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		*(b + i) = *(a + i);
	}

	*(b + i) = '\0';

	puts(a);
	printf("\n");

	puts(b);


	return 0;
}