#include <stdio.h>

int main()
{
	unsigned char c = 0xAA;
	printf(" c=%hhx\n", c);
	printf("-c=%hhx\n", (char)-c);   //补码
	printf("~c=%hhx\n", (char)~c);   //按位取反

	return 0;
}