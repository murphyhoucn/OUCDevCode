#include <stdio.h>

int main(void)
{
	printf("Enter time1:");
	int time1;
	//scanf_s("%d", &time1);
	scanf("%d", &time1);

	printf("Enter time2:");
	int time2;
	//scanf_s("%d", &time2);
	scanf("%d", &time2);

	int time1_m = time1 % 100;
	int time1_h = time1 / 100;

	
	int time2_m = time2 % 100;
	int time2_h = time2 / 100;

	if (time2_m < time1_m)
	{
		time2_m += 60;
		time2_h -= 1;
	}


	printf("The train journey time is %d hours %d minutes", time2_h - time1_h, time2_m - time1_m);

	return 0;

	
}