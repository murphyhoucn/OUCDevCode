#include <stdio.h>

int main()

{
	void copy_string(char from[], char to[]);

	char a[] = "i am a boy";
	char b[] = "i am a dog";

	printf("string a is %s\nstring b is %s\n", a, b);

	printf("copy from string a to string b:\n");

	copy_string(a, b);

	printf("string a is %s\nstring b is %s\n", a, b);

	return 0;
}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}

	to[i] = '\0';
}