#include <stdio.h>

int main()
{
	int num;
	int i1 = scanf_s("%i", &num);
	int i2 = printf("%d\n", num);
	printf("%d\n", i1);    //�����ĸ���

	printf("%d\n", i2);   //����ĸ�����������\n����

	return 0;
}