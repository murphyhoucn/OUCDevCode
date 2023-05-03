#include <stdio.h>

enum COLOR{RED,YELLOW,GREEN};
int main()
{
	int color = -1;
	char *colorName = NULL;

	printf("请输入你喜欢的颜色的代码：");
	scanf_s("%d", &color);
	switch (color) {
	case RED:colorName = "red"; break;
	case YELLOW:colorName = "yellow"; break;
	case GREEN:colorName = "green"; break;
	default:colorName = "unknow"; break;
	}
	printf("你喜欢的颜色是%s\n", colorName);

	return 0;

}