//打印九九乘法口诀表
//要求任意给定一位正整数n，输出从1*1到n*n的部分口诀表
//等号右边的数字占四格，左对齐


#include <stdio.h>
int main()
{
	int n;
	int i=1;
	int j;

	scanf("%d", &n);

	while (i <= n) {
		j = 1;
		while (j <= i) {
			printf("%d*%d=%d", j, i, i*j);
			if (i*j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;

}