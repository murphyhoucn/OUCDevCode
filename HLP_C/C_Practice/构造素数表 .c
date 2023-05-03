#include <stdio.h>
int main()
{
	const int maxNumber = 25;
	int isPrime[25];
	int x;
	int i;

	//�������飬ʹ�����е�Ԫ�ض���ʼ��Ϊ1
	for (i=0;i<maxNumber;i++) {
		isPrime[i] = 1;
	}

	
	//for test ��ͷ����
	printf("\t");
	for (i = 2; i < maxNumber; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	//for test
	

	//�������飬��2�ı�������Ӧ��Ԫ�ر��Ϊ0��ͬ��3�ı�������������
	for (x = 2; x < maxNumber; x++) {
		if (isPrime[x]) {
			for (i = 2; i*x < maxNumber; i++) {
				isPrime[i*x] = 0;
			}
		}

	
		//for test
		printf("%d\t", x);
		for (i = 2; i < maxNumber; i++) {
			printf("%d\t", isPrime[i]);
		}
		printf("\n");
		//for test
	}
	


	//�����������
	printf("\n");
	for (i = 2; i < maxNumber; i++) {
		if (isPrime[i]) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	return 0;
}

/*������ɫ��ɸѡ��(the Sieve of Eratosthenes)��ư���ɸ����
�ǹ�ϣ����ѧ�Ұ�����ɫ��(Eratosthenes 274B.C.��194B.C.)�����һ��ɸѡ���� 
�������Ȼ�����е���Ȼ����ʵʩ�ģ�������һ����Χ�ڵ�������
�����ݳ�ԭ��֮�걸��������p=H~��
*/