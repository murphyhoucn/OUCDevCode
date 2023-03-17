#include <stdio.h>
#include <string.h>



int main()
{
	char line[] = "hello";
	printf("strlen=%lu\n", strlen(line));     //strlen 计算字符串的长度，不包括最后的“\0”
	printf("sizeof=%lu\n", sizeof(line));

	return 0;
}