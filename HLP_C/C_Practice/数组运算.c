#include <stdio.h>
int main()
{
	int i;
	int a[] = { 2,4,6,7,1,3,5,9,11,13,23,14,32 };//����ļ��ɳ�ʼ��
	//int a[5] = { 1,2 };  //��������0����
	//int a[5] = { [0] = 2,[2] = 5,6 };  //���鼯�ɳ�ʼ���Ķ�λ

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");

	


	return 0;
}