#include <stdio.h>

int main()
{
	char str[3][20];
	char string[20];

	for (int i = 0; i < 3; i++)
	{
		gets(str[i]);
	}

	if (strcmp(str[0], str[1]) > 0)
	{
		strcpy(string, str[0]);
	}
	else
	{
		strcpy(string, str[1]);
	}

	if (strcmp(str[2], string) > 0)
	{
		strcpy(string, str[2]);
	}

	printf("\nthe largets sring is:\n%s\n",string);

	return 0;
}