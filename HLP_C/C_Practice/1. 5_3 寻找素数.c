#include <stdio.h>

int main(void)
{
	int a;
	const int minprime = 2;
	printf("Input num:");
	//scanf_s("%d", &a);
	scanf("%d", &a);
	int fun_prime(int a,int flag);
	int prime1;
	int prime2;

	int flag = 0;
	
	if (a < 2 )
	{
		printf("Prime number is ");
		printf("%d", minprime);
	}
	else if (a == 2)
	{
		printf("Prime number is ");
		printf("%d", minprime + 1);
	}
	else
	{
		prime1 = fun_prime(a, flag); //大的
		flag = 1;
		prime2 = fun_prime(a, flag); //小的

		if ((prime1 - a) > (a - prime2))
		{
			printf("Prime number is ");
			printf("%d", prime2);
		}
		else if ((prime1 - a) < (a - prime2))
		{
			printf("Prime number is ");
			printf("%d", prime1);
		}
		else
		{
			printf("Prime number are ");
			printf("%d,%d", prime2, prime1);
		}
	}
	return 0;
}

int fun_prime(int a,int flag)
{
	int i;
	int result = 0;
	int temp1 = a;
	int temp2 = a;

	int flag2;

	if (flag == 0)
	{
		temp1++;
		while (1)
		{
			for (i = 2; i < temp1; i++)
			{
				flag2 = 0;
				if (temp1%i == 0)
				{
					flag2 = 1;
					break;
				}
			}
			if (flag2 == 1)
			{

				temp1++;
			}
			else
			{
				result = temp1;
				break;
			}
		}
	}
	else
	{
		temp2--;
		while (1)
		{
			flag2 = 0;
			for (i = 2; i < temp2; i++)
			{
				if (temp2%i == 0)
				{
					flag2 = 1;
					break;
				}
			}
			if (flag2 == 1)
			{
				temp2--;
			}
			else
			{
				
				result = temp2;
				break;
			}
		}
	}
	return result;
}