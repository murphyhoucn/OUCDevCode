#include <stdio.h>
//#include <string.h>


int main()
{
	char str1[10] = { "BeiJing" };
	printf("%s\n", strlwr(str1));

	char str2[15] = { "abcdefjhijkl" };
	strcpy(str2, strlwr(str1));
	printf("%s\n", str2);

	for (int i = 0; i < 15; i++)
	{
		printf("%c\n", str2[i]);
	}

	printf("%d\n", strlen(str2));

	return 0;
}