//��ӡ�žų˷��ھ���
//Ҫ���������һλ������n�������1*1��n*n�Ĳ��ֿھ���
//�Ⱥ��ұߵ�����ռ�ĸ������


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