#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[100];
	gets(str);

	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) != 0 && isalpha(str[i + 1]) != 0)
		{
			printf("%c*",str[i]);
		}
		else
		{
			printf("%c",str[i]);
		}
	}

	return 0;
}