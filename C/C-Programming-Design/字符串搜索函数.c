#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "hello";
	char *p=strchr(s,'l'); //单引号
	printf("%s\n", p);   //寻找第一个


	p = strchr(p + 1, 'l');//寻找第二个
	printf("%s\n", p);
	return 0;

}