#include <stdio.h>
int main()
{
	int bill = 0;
	int price = 0;

	printf("�������");
	scanf("%d", &price);

	printf("������Ʊ�棺");
	scanf("%d", &bill);

	if (bill >= price) {
		printf("Ӧ��������%d\n", bill - price);

	}
	else {
		printf("���Ǯ������\n");
	}

	return 0;
}