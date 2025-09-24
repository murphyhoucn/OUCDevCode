#include <stdio.h>

int main()
{
	char str1[20] = { "abcdefghijklmn" };
	char str2[] = { "beijing" };
	
	printf("%s\n", strcpy(str1, str2));
	//printf("%s\n", strcpy(str1, "shanghai"));

	for (int i = 0; i < 20; i++)
	{
		printf("%c\n", str1[i]);
	}
	

	return 0;
}