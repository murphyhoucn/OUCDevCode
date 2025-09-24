#include <stdio.h>
int main()
{
	double foot;
	double inch;
	scanf("%lf %lf", &foot, &inch);
	printf("身高是%f米", ((foot + inch / 12)*0.3048));
	return 0;
}
//double 双精度浮点数       输入：lf 输出：f
//float 单精度浮点数