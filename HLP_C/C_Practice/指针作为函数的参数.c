#include <stdio.h>

void f(int *p);
void g(int k);

int main()
{
	int i = 6;
	printf("&i=%p\n", &i);
	f(&i);
	g(i);

	return 0;
}

void f(int *p)      //*:˵��������ָ�����
{
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);     //*:ȡ�����ָ��ָ��ĵ�ַ������ı�����ֵ

	//*p = 26;     //*�����巢���˸ı䣬*������ָ���ַ�����Ƕ�ȡ�����޸ķ���p�е����֣�Ҳ����**p=p��
}
void g(int k)
{
	printf("k=%d\n", k);
}