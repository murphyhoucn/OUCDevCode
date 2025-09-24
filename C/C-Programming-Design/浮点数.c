#include <stdio.h>
int main()
{
	int foot;
	int inch;
	scanf("%d %d", &foot, &inch);
	printf("身高是%f米。", ((foot + inch / 12.0)*0.3048));
	//printf("身高是%f米。", ((foot + inch / 12)*0.3048)); 两个整数相除只能得到整数
	return 0;

}