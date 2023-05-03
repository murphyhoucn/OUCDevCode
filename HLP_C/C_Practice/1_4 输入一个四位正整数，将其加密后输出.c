#include <stdio.h>




int main(void)
{
	void trans(int m, int n);
	int x;
	int des[4];
	printf("Enter a number:");
	//scanf_s("%d", &x);
	scanf("%d", &x);



	int i;
	for (i = 0; i < 4; i++)
	{
		des[i] = x % 10;
		x /= 10;
	}

	for (i = 0; i < 4; i++)
	{
		//printf("test:%d\n", des[i]);
		des[i] = (des[i] + 9) % 10;
		//printf("test:%d\n", des[i]);
	}

	int temp;

	temp = des[0];
	des[0] = des[2];
	des[2] = temp;



	temp = des[1];
	des[1] = des[3];
	des[3] = temp;



	int sum = 0;
	int in = 1;



	for (i = 0; i < 4; i++)
	{
		sum += des[i] * in;
		in *= 10;
	}

	printf("The encrypted number is %d\n", sum);

	return 0;

}

void trans(int m, int n)
{
	int temp;

	temp = m;
	m = n;
	n = temp;
}