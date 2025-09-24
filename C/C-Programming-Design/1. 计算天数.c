#include <stdio.h>

int main(void)
{
	int judge(int y);
	struct Data
	{
		int year;
		int month;
		int day;

	};
	struct Data d;

	int n1[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	int n2[12] = { 0,31,29,31,30,31,30,31,31,30,31,30 };

	scanf("%d %d %d", &d.year, &d.month, &d.day);

	int flag;
	
	flag = judge(d.year);

	int sum = 0;
	int i;

	if (flag == 1)
	{
		for (i = 0; i < d.month; i++)
		{
			sum += n1[i];
		}

		sum += d.day;
	}
	else
	{
		for (i = 0; i < d.month; i++)
		{
			sum += n2[i];
		}

		sum += d.day;
	}

	printf("%d", sum);

	return 0;

}

int judge(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}