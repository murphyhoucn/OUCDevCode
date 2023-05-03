#include <stdio.h>
int main()
{
	int price = 0;   //定义一个变量。变量的名字是price，类型是int,初始值是0.。变量是一个保存数据的地方
	                   //变量定义的一般类型：<类型名称> <变量名称>;
	                  //变量的名字叫做：标识符
	printf("请输入金额：");
	scanf("%d", &price);
	int change = 100 - price;
	printf("找零%d", change);
	return 0;
}