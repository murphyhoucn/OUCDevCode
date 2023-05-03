#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[10];
	char str2[10];
	char str3[10];

	gets_s(str1, 10);
	//puts(str1);
	gets_s(str2, 10);
	gets_s(str3, 10);

	unsigned int len = strlen(str1) + strlen(str2) + 1;
	printf("before:%s\n", str1);
	strcat_s(str1, len, str2);
	printf("after:%s\n",str1);

	return 0;
}