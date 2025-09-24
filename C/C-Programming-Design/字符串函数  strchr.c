#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[] = "hello";
	char *p = strchr(s, 'l');
	char c = *p;
	*p = "\0";
	char *t = (char*)malloc(strlen(s) + 1);
	strcpy_s(t,sizeof(t)/sizeof(t[0]), p);
	printf("%s\n", t);
	free(t);
	return 0;
}