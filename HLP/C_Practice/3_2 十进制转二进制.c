#include <stdio.h>
#define N 100

int main(void)
{

	void db_fun(int a);
	int sign(int a);


	int decimal;
	//scanf_s("%d", &decimal);
	scanf("%d", &decimal);

	if (decimal == 0)
	{
		printf("0");
	}
	else
	{
		int un_decimal;

		un_decimal=sign(decimal);

		db_fun(un_decimal);
	}

	return 0;
}

int sign(int a)
{
	int un_a;
	if (a < 0)
	{
		un_a = -1 * a;
		printf("-");
	}
	else
	{
		un_a = a;
		//printf("0");
	}


	return un_a;

}

void db_fun(int a)
{
	int array[N];


	int i=0;


	while (a > 0)
	{
		array[i] = a % 2;
		a /= 2;
		i++;

		//printf("i=%d\n", i);
	}

	int j;

	for (j = i-1; j >= 0; j--)
	{
		printf("%d", array[j]);
	}
}