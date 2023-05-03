#include <stdio.h>
int main()
{
	const int maxNumber = 25;
	int isPrime[25];
	int x;
	int i;

	//遍历数组，使其所有的元素都初始化为1
	for (i=0;i<maxNumber;i++) {
		isPrime[i] = 1;
	}

	
	//for test 表头部分
	printf("\t");
	for (i = 2; i < maxNumber; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	//for test
	

	//遍历数组，把2的倍数所对应的元素标记为0，同理，3的倍数，依次类推
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
	


	//遍历输出部分
	printf("\n");
	for (i = 2; i < maxNumber; i++) {
		if (isPrime[i]) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	return 0;
}

/*埃拉托色尼筛选法(the Sieve of Eratosthenes)简称埃氏筛法，
是古希腊数学家埃拉托色尼(Eratosthenes 274B.C.～194B.C.)提出的一种筛选法。 
是针对自然数列中的自然数而实施的，用于求一定范围内的质数，
它的容斥原理之完备性条件是p=H~。
*/