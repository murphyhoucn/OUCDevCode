#include <stdio.h>
int main()
{
	double foot;
	double inch;
	scanf("%lf %lf", &foot, &inch);
	printf("�����%f��", ((foot + inch / 12)*0.3048));
	return 0;
}
//double ˫���ȸ�����       ���룺lf �����f
//float �����ȸ�����