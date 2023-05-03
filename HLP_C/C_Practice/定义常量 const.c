#include <stdio.h>
int main()
{
	const int AMOUNT = 100;    //定义常量来代表常数
	                //const是一个修饰符，加在int的前面，用来给这个变量加上一个const(不变的)的属性。
					//这个const的属性表示这个变量的值一旦初始换就不能再修改了。
					//

	int price = 0;
	printf("请输入金额：");
	scanf("%d", &price);
	int change = AMOUNT - price;
	printf("找您%d元。\n", change);
	return 0;
}