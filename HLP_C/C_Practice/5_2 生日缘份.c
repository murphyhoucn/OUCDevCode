#include <stdio.h>

int main(void)
{
	int x;
	int y;

	//scanf_s("%d", &x);
	//scanf_s("%d", &y);
	scanf("%d", &x);
	scanf("%d", &y);

	int fun(int a);
	int x1 = fun(x);
	int x2 = fun(y);
	int kk = x1 + x2;
	start:
	if (kk < 10)
	{
		printf("Input the first date:Input the second date:Fate value is %d", kk);
	}
	else
	{
		kk=fun(kk);
		goto start;
	}
	return 0;
}

int fun(int a)
{
	int temp = 0;

	do
	{
		temp += a % 10;
		a /= 10;
	} while (a > 0);
	//printf("%d", temp);
	return temp;

}


	



