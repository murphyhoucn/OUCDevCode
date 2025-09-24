#include <stdio.h>
int main()
{
	float a, b, c;

	a = 1.345f;  //f或者F表示一个float类型的数字，不带字母表示为默认的double 类型的浮点数
	b = 1.123f;
	c = a + b;
	if (c == 2.468) {
		printf("相等\n");
	}
	else {
		printf("不相等！ \n");
		printf("c=%.10f\n", c);  
		printf("c=%f\n", c);    //所代表的数字不准确 经过了四舍五入
	}

	return 0;
}