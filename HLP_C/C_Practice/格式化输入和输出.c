#include <stdio.h>

int main(int argc, const char *argv[])
{
	//flags
	int a = 123;
	printf("%9d\n", a);      //9���������ռ�ݵ��ַ��ռ䣨Ĭ���Ҷ��룩
	printf("%+9d\n", a);      //+����ǰ����ϡ�+��
	printf("%-9d\n", a);      //-�������
	printf("%-+9d\n", a);      //
	printf("%09d\n", a);  //���0
	printf("%9d\n", a);
	printf("\n");

	//width
	double b = 12.35644;
	printf("%9.2f\n", b);  //9��ռ��9��λ��        .2f��������λС��
	int len = 10;
	printf("%*d\n",len, a);   //*:����   *�൱�ں����len
	printf("\n");

	//hlL
	printf("%hhd\n", 12345);


	//%n
	int num;
	printf("%d%n\n", 12345, &num);
	printf("%d\n", num);
	
	


	return 0;
}