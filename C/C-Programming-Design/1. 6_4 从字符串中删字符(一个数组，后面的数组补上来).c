#include <stdio.h>
#include <string.h>

#define N 100

int main(void)
{
	char string[N] = {'\0'};
	gets_s(string, N);

	char c;
	c=getchar();

	int i;
	int j;
	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = i+1; j<N; j++)
		{
			if (string[i] == c)
			{
				string[i] = string[j];
				string[j] = c;
			}
		}
		
	}

	puts(string);

	return 0;
}