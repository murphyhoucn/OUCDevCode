#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define N 1000


int main(void)
{
	char str[N];

	gets(str);
	//gets_s(str, N);

	int i;
	int t = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' '&&str[i + 1] == ' ')
		{
			for (t = i + 1; str[t] != '\0'; t++)
				str[t] = str[t + 1];
			str[t + 1] = '\0';
			i--;
		}
	}

	puts(str);

	return 0;

}



