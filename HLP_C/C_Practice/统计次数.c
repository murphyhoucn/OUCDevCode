#include <stdio.h>
int main()
{
	const int number = 10;    //����Ĵ�С
	int x;
	int count[10];   //��������
	int i;
	//�������飬�����ʼ��
	for (i = 0; i < number; i++) {
		count[i] = 0;
	}

	scanf_s("%d", &x);
	while (x != -1) {
		if (x >= 0 && x <= 9) {
			count[x]++;   //�����������
		}
		scanf_s("%d", &x);
	}
	for (i = 0; i < number; i++) {    //��������
		printf("%d:%d\n",i, count[i]);
	}

	return 0;
}