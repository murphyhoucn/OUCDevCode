#include <stdio.h>
int main()
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf_s("%d", &x);    /*scanf_s() 的功能虽然与scanf() 相同，
	                       但却比 scanf() 安全，
		                   因为 scanf_s() 是针对“ scanf()在读取字符串时不检查边界，
		                   可能会造成内存泄露”这个问题设计的。*/
	while (x != -1) {
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf_s("%d", &x);
		
	}
	if (cnt > 0) {
		double average = sum / cnt;
		int i;
		for (i = 0; i < cnt; i++) {
			if (number[i] > average) {
				printf("%d\n", number[i]);
			}
		}
	}

	return 0;
}