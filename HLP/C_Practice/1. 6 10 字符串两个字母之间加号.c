#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main(void)
{
	char string[N];
	//char string2[N] = { '\0' };

	//gets_s(string, N);
	gets(string);

	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (isalpha(string[i]) != 0 && isalpha(string[i + 1]) != 0)
		{
			/*
			for (j = strlen(string) ; j > i; j--)
			{
				string[j + 1] = string[j];
			}
			string[i] = '*';
			break;
			*/
			printf("%c*", string[i]);
		}
		else
		{
			printf("%c", string[i]);
		}

	}
	return 0;
}