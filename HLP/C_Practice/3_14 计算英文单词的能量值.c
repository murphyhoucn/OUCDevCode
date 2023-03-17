#include <stdio.h>
#include <string.h>


#define N 100

int main(void)
{
	char str[N] = { '\0' };
	printf("Input a word:");
	//gets_s(str, N);
	gets(str);

	unsigned int num = strlen(str);

	unsigned int i;


	int sum = 0;


	for (i = 0; i < num; i++)
	{
		if (str[i] >= 65 && str[i] <= 90) { str[i] = str[i] + 32; }
	}

	//puts(str);

		
	for (i = 0; i < num; i++)
	{
		sum += (str[i] - 96);
	}

	printf("energy=%d", sum);
	return 0;
}