#include <stdio.h>
int main()
{
	int price = 0;   //����һ��������������������price��������int,��ʼֵ��0.��������һ���������ݵĵط�
	                   //���������һ�����ͣ�<��������> <��������>;
	                  //���������ֽ�������ʶ��
	printf("�������");
	scanf("%d", &price);
	int change = 100 - price;
	printf("����%d", change);
	return 0;
}