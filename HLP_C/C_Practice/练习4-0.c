//����������6��������A�����Ǵ�A��ʼ������4�����֡��������������ɵ����ظ���3λ���֡�
//�����ʽ�����������������λ����Ҫ���С����ÿ��6�����֡��������Կո�ָ�����ĩ�в����ж���Ŀո�



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