#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "hello";
	char *p=strchr(s,'l'); //������
	printf("%s\n", p);   //Ѱ�ҵ�һ��


	p = strchr(p + 1, 'l');//Ѱ�ҵڶ���
	printf("%s\n", p);
	return 0;

}