#include <stdio.h>
int main()
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf_s("%d", &x);    /*scanf_s() �Ĺ�����Ȼ��scanf() ��ͬ��
	                       ��ȴ�� scanf() ��ȫ��
		                   ��Ϊ scanf_s() ����ԡ� scanf()�ڶ�ȡ�ַ���ʱ�����߽磬
		                   ���ܻ�����ڴ�й¶�����������Ƶġ�*/
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