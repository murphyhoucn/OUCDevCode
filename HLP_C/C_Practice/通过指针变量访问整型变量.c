#include <stdio.h>

int main()
{
	int a = 100;
	int b = 10;
	int * pointer_1;  //����ָ���������ݵ�ָ�����Pointer_1
	int * pointer_2;  //����ָ���������ݵ�ָ�����Pointer_2

	pointer_1 = &a;
	pointer_2 = &b;

	printf("a=%d\tb=%d\n", a, b);
	printf("*pointer_1=%d\t*pointer_2=%d\n", *pointer_1, *pointer_2);//�������ָ��ָ��ı�����ֵ
	printf("pointer_1=%d\tpointer_2=%d\n", pointer_1, pointer_2);  //������Ǳ����ĵ�ַ����ָ�룩

	return 0;

}