#include <stdio.h>


int main()

{
	char str1[30] = { "china" };
	char str2[] = { "beijing" };
	printf("%s\n", strcat(str1, str2));
	return 0;
}