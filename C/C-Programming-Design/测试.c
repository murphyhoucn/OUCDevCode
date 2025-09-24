#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];

	scanf_s("%s", s,100);
	//scanf_s("%s",&s[0]);
	printf("%s", s);

	return 0;
}
