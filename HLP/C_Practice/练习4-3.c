//ͳ�����������
//Ҫ��ͳ�Ƹ�������m n �����ڵ������ĸ����������

#include <stdio.h>
int main()
{
	int n, m;
	int cnt;
	int num = 0;
	int sum = 0;
	scanf("%d %d", &n, &m);
	if (n == 1) {
		n = 2;
	}

	for (n; n <= m; n++) {
		cnt = 0;
		int i = 2;
		while (i < n) {
			if (n%i == 0) {
				cnt++;
			}
			i++;
		}
		if (cnt == 0) {
			sum += n;
			num++;
		}
	}
	printf("%d %d", num, sum);
	return 0;
}