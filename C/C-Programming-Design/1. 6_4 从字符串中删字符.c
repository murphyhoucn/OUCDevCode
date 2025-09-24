#include <stdio.h>

#define N 100

int main(void)
{
	printf("Input a string:");
	char string[N];
	char string2[N] = {'\0'};
	//gets_s(string, N);
	gets(string);

	printf("Enter a character:");
	char c;
	c = getchar();

	int i;
	int k;
	for (k=0,i = 0; string[i]!='\0'; i++)
	{
		if (string[i] != c)
		{
			string2[k] = string[i];
			k++;
		}
	}
	printf("========After deleting========\n");
	printf("%s", string2);


	return 0;
}