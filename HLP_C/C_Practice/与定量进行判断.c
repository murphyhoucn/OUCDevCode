#include <stdio.h>
int main()
{
	int age = 0;
	const int MINOR = 35;

	printf("请输入你的年龄：");
	scanf("%d", &age);

	printf("你的年龄是%d岁。\n",age);

	if (age < MINOR) {
		printf("年轻是美好的，");
	}

	printf("年龄决定了你的精神世界，好好珍惜吧。\n");


	return 0;
}