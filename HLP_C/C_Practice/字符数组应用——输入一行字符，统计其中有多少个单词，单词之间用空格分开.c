#include <stdio.h>

int main()
{
	char string[81];

	int num = 0;
	int word = 0;

	char c;
	gets_s(string,81);

	for (int i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c == ' ') { word = 0; }

		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("there are %d words in this line.\n", num);
	return  0; 
}