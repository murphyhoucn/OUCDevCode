#include <stdio.h>
int main()
{
	int foot;
	int inch;
	scanf("%d %d", &foot, &inch);
	printf("�����%f�ס�", ((foot + inch / 12.0)*0.3048));
	//printf("�����%f�ס�", ((foot + inch / 12)*0.3048)); �����������ֻ�ܵõ�����
	return 0;

}