#include <stdio.h>

int main()
{
	void copy_string(char *from, char *to);

	char array_from[] = "i am a boy";
	char array_to[] = "i am a dog";

	printf("string array_from is %s\nstring array_to is %s\n", array_from, array_to);
	printf("\n");

	char *from;
	char *to;
	from = array_from;
	to = array_to;
	printf("copy string from array_from to array_to:\n");
	printf("\n");

	copy_string(from, to);

	printf("string array_from is %s\nstring array_to is %s\n", from, to);

	return 0;
}

void copy_string(char *from, char*to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;
	}
	*to = '\0';
}