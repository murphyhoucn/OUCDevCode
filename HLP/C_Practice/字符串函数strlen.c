#include <stdio.h>
#include <string.h>



int main()
{
	char line[] = "hello";
	printf("strlen=%lu\n", strlen(line));     //strlen �����ַ����ĳ��ȣ����������ġ�\0��
	printf("sizeof=%lu\n", sizeof(line));

	return 0;
}