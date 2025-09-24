#include <stdio.h>

int main()
{
	int a, b, c = 5;//只初始化了c，并没有初始化a,b
	//printf("%d\t%d\t%f\n", a, b, c);
	printf("%d\n", c);


	int x = 5, y = 5, z = 5;
	printf("%d\t%d\t%d\n", x, y, z);

	//int o = p = q = 6; //错误
	//printf("%d\t%d\t%f\n", o, p, q);


	return 0;


}