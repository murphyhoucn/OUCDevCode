//ˮ�ɻ���
//ˮ�ɻ�����ָһ��Nλ��������N>=3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
//�������е�Nλˮ�ɻ���
//Ҫ��3<=N<=7

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