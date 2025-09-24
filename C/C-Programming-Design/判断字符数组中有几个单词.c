#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main(void)
{

	int fun(char *test);

	char test[N];

	//gets_s(test,N);
	gets(test);

	int result = fun(test);

	printf("%d\n", result);

	return 0;
}

int fun(char *test)
{
	int result = 0;
	int i;
	if (test == NULL) 
	{ 
		result = 0; 
	}
	else
	{
		for (i = 0; test[i] != '\0'; i++)
		{
			if (isalpha(test[i] != 0 && isalpha(test[i + 1] == 0))){result++;}
		}
	}

	return result;
}