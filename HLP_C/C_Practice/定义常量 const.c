#include <stdio.h>
int main()
{
	const int AMOUNT = 100;    //���峣����������
	                //const��һ�����η�������int��ǰ�棬�����������������һ��const(�����)�����ԡ�
					//���const�����Ա�ʾ���������ֵһ����ʼ���Ͳ������޸��ˡ�
					//

	int price = 0;
	printf("�������");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("����%dԪ��\n", change);
	return 0;
}