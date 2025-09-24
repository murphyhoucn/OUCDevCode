//给定不超过6的正整数A，考虑从A开始连续的4个数字。请输出由他们组成的无重复的3位数字。
//输出格式：输出满足条件的三位数，要求从小到大，每行6个数字。整数间以空格分隔，但末行不能有多余的空格



#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i, j, k;
	int cnt = 0;

	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a+3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							printf("%d%d%d ", i, j, k);
							cnt++;
							if (cnt % 6 == 0) {
								printf("\n");
							}
							else {
								printf(" ");
							}
							//printf("%d",i*100+j*10+k);
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	
	return 0;

}