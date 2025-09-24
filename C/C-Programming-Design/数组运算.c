#include <stdio.h>
int main()
{
	int i;
	int a[] = { 2,4,6,7,1,3,5,9,11,13,23,14,32 };//数组的集成初始化
	//int a[5] = { 1,2 };  //不满的用0补满
	//int a[5] = { [0] = 2,[2] = 5,6 };  //数组集成初始化的定位

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");

	


	return 0;
}