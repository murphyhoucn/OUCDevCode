#include <stdio.h>

int main()
{
	char c;
	scanf_s("%c", &c);
	printf("the translated letter:");
	switch (c)
	{
	case 'a':
	case 'A':printf("a"); break;
	case 'b':
	case 'B':printf("b"); break;
	//default:printf("error");
	default:printf("\rthe input has an error£¡£¡£¡£¡£¡£¡");
	}

	return 0;
}