#include <stdio.h>
int main()
{
	int i;
	int* p = &i;    //p��ָ�룬*��p��ָ�룬ָ�����int��&ȡ��i�ĵ�ַ����i�ĵ�ַ����p
	               //pָ��i��p��ֵ��i�ĵ�ַ

	int* p, q;    // p��ָ�룬*��p��ָ�룬ָ�����int��  qֻ��һ����ͨ��int����
	int *p, q;    //ͬ��

	return 0;
}