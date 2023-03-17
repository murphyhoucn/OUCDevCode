//水仙花数
//水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于他本身。
//计算所有的N位水仙花数
//要求：3<=N<=7

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int first = 1;
	int i = 1;
	while (i < n) {
		first *= 10;
		i++;
	}

	i = first;
	while (i < first*10) {
		int t = i;
		int sum = 0;
		do {
			int d = t % 10;
			t /= 10;
			int p = 1;
			int j = 0;
			while (j < n) {
				p *= d;
				j++;
			}
			sum += p;
		} while (t > 0);
		if (sum == i) {
			printf("%d\n", i);
		}
		i++;

	}
	return 0;
}