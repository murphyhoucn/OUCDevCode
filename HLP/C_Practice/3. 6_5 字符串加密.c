#include<stdio.h>
#include <string.h>

#define N 100

int main(void)
{
	printf("Input a word:");
	char string[N];
	char string2[N] = { '\0' };
	//gets_s(string, N);
	gets(string);
	
	int i;
	int counter;

	unsigned int len = strlen(string);

	for (i = 0; string[i]!='\0'; i++)
	{
		if ('A' <= string[i] && string[i] <= 'Z')
		{
			counter = string[i] - 64 + len + i;
			//printf("%d\n", counter);
			if (counter > 26)
			{
				counter %= 26;
				string2[i] = counter + 64;
			}
			else
			{
				string2[i] = counter+64;
			}
		}
		else
		{
			counter = string[i] - 96 + len + i;
			if (counter > 26)
			{
				counter %= 26;
				string2[i] = counter + 96;
			}
			else
			{
				string2[i] = counter+96;
			}
		}
		
	}
	printf("The encoded word is ");
	//puts(string2);
	printf("%s", string2);

	return 0;
}