#include <stdio.h>
int main()
{
	int amount = 100;
	int price = 0;

	printf("�������");
	scanf("%d", &price);

	printf("������Ʊ�棺");
	scanf("%d", &amount);

	int change = amount-price;
	printf("����%dԪ��\n", change);
	return 0;
}