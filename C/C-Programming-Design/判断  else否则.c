#include <stdio.h>
int main()
{
	int bill = 0;
	int price = 0;

	printf("请输入金额：");
	scanf("%d", &price);

	printf("请输入票面：");
	scanf("%d", &bill);

	if (bill >= price) {
		printf("应该找您：%d\n", bill - price);

	}
	else {
		printf("你的钱不够。\n");
	}

	return 0;
}