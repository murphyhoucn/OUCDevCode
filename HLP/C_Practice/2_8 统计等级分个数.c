#include <stdio.h>

#define N 100

int grade[N];

int main(void)
{
	int n;
	printf("Enter n: ");

	scanf("%d", &n);
	
	
	//int *p = grade;

	int i;
	for (i = 0; i < n; i++)
	{
		int a = 0;
		printf("Enter grade %d: ", i+1);
		scanf("%d", &a);

		if (a >= 90 && a <= 100)
		{
			grade[0]++;
		}
		else if (a >= 80 && a <= 89)
		{
			grade[1]++;
		}
		else if (a >= 70 && a <= 79)
		{
			grade[2]++;
		}
		else if (a >= 60 && a <= 69)
		{
			grade[3]++;
		}
		else
		{
			grade[4]++;
		}
	}
	printf("The number of A(90 ~100):%d\n", grade[0]);
	printf("The number of B(80 ~89):%d\n", grade[1]);
	printf("The number of C(70 ~79):%d\n", grade[2]);
	printf("The number of D(60 ~69):%d\n", grade[3]);
	printf("The number of E(0 ~59):%d\n", grade[4]);

	return 0;

}