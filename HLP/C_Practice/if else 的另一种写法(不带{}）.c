#include <stdio.h>
int main()
{
	const double RATE = 8.25;
	const int STANFARD = 40;
	double pay = 0.0;
	int hours;

	printf("�����빤����Сʱ����");
	scanf("%d", &hours);
	printf("\n");

	if (hours > STANFARD)
		pay = STANFARD * RATE + (hours - STANFARD)*(RATE*1.5);
	else
		pay = hours * RATE;
	printf("Ӧ�����ʣ�%f\n", pay);
	return 0;

}