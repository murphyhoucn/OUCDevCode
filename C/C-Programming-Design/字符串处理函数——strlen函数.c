#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10] = { "china" };
	int num;
	num = strlen(str1);
	printf("%d\n", num);

	printf("%d\n", strlen(str1));

	printf("%d\n", strlen("china"));

	return 0;
}