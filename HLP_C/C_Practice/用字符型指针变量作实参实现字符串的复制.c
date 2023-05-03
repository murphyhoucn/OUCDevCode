#include <stdio.h>

int main()
{
	void copy_string(char from[], char to[]);

	char array_from[] = "i am a boy";
	char array_to[] = "i am a dog";

	printf("string array_form is %s\nstring array_to is %s\n", array_from, array_to);

	char *from;
	char *to;
	from = array_from;
	to = array_from;

	printf("copy from array_from to array_to:\n");

	copy_string(from, to);

	printf("string array_from is %s\nstring array_to is %s\n", from, to);

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