#include <stdio.h>
#include <math.h>

int main(void)
{
	int inv(int *n);
	void isprime(int *p1,int *p2);


	int n;
	scanf("%d", &n);
	//scanf_s("%d", &n);

	int *p1 = &n;

	int inv_n = inv(p1);

	int *p2 = &inv_n;

	isprime(p1, p2);

	return 0;
}
int inv(int *n)
{
	int temp1=*n;
	int temp2 = *n;

	int s = 0;

	int count = 0;
	while (temp1>0)
	{
		temp1 /= 10;
		count++;
	}
	//printf("count=%d\n", count);

	while (temp2 > 0)
	{
		s += (temp2 % 10)*(int)pow(10, count-1);
		temp2 /= 10;
		count--;
	}
	//printf("s=%d\n", s);
	return s;
}
void isprime(int *p1, int *p2)
{
	int flag1 = 0;
	int flag2 = 0;
	int i;
	for (i = 2; i < *p1; i++)
	{
		if (*p1%i == 0) { flag1 = 1; break; }
	}
	for (i = 2; i < *p1/2; i++)
	{
		if (*p2%i == 0) { flag2 = 1; break; }
	}

	if (flag1 == 0 && flag2 == 0) { printf("yes"); }
	else { printf("no"); }

}
