#include <stdio.h>

int main()
{
	char *a = "i am a boy";
	printf("%s\n", a);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a++;
		printf("%s\n", a);
	}
	

	return 0;
}