#include <stdio.h>
int main()
{
	int price = 0;
	int bill = 0;

	printf("��������:");
	scanf("%d", &price);

	printf("������Ʊ��:");
	scanf("%d", &bill);
	if (bill >= price) {
		printf("������%d", bill - price);
	}
	

	return 0;

}