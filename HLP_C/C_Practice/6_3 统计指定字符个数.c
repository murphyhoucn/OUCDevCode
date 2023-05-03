#include <stdio.h>

#define N 81

int main(void)
{
	printf("Input a string:");
	char string[N];
	//gets_s(string, N);
	gets(string);

	printf("Enter a character:");
	char c;
	//scanf_s("%c", &c, sizeof(c));
	scanf("%c", &c);
	
	int i;
	int num = 0;

	for (i = 0; i < N; i++)
	{
		if (string[i] == c)
		{
			num++;
		}
	}

	printf("Number of character %c=%d", c, num);

	return 0;

}