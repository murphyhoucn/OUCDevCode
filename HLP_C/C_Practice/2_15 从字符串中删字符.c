#include <stdio.h>
#include <string.h>

#define N 1000

int main(void)
{
	char string[N];
	char c;
	printf("Input a string:");
	//gets_s(string, N);
	gets(string);
	printf("Enter a character:");
	c = getchar();

	int i;
	printf("========After deleting========\n");
	for (i = 0; string[i] != '\0'; i++)
	{

		if (string[i] != c)
		{
			printf("%c", string[i]);
		}
	}

	return 0;

}