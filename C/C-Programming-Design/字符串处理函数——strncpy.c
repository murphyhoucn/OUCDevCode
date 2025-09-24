#include <stdio.h>

int main()
{
	char s1[20] = { "abcdefghijk" };
	char s2[] = "beijing";

	printf("%s\n", strncpy(s1, s2, 3));

	for (int i = 0; i < 20; i++)
	{
		printf("%c\n", s1[i]);
	}


	return 0;
}