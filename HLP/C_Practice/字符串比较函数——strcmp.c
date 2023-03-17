#include <stdio.h>

int main()
{
	char str1[15] = { "beijing" };
	char str2[15] = { "BEIJING" };

	//int ret=strcmp(str1,str2);

	if (strcmp(str1,str2)>0)
	{
		printf("dayu");
	}
	else if (strcmp(str1, str2)==0)
	{
		printf("xiangdeng");
	}
	else
	{
		printf("xiaoyu");
	}

	return 0;
}