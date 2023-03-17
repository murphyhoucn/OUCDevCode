#include <stdio.h>

int main()
{
	char c[15] = { 'i',' ','a','m',' ','a',' ','s','t','u','d','e','n','t' };

	for (int i = 0; i < 15; i++)
	{
		printf("%c", c[i]);
	}
	printf("\n");

	return 0;
}