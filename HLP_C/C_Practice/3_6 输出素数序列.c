#include <stdio.h>

int main(void)
{
	void cycle(int a, int n);

	int x;
	int k;

	scanf("%d %d", &x, &k);

	if (x <= 0) { x = 1; }

	cycle(x, k);

	return 0;
}

void cycle(int a, int n)
{
	int i;
	int j=0;

	int isprime(int c);

	for (i = a + 1; j < n; i++)
	{
		int temp = isprime(i);

		if (temp == 0) { printf("%d ", i); j++; }
	}
}

int isprime(int c)
{
	int i;
	int flag = 0;

	for (i = 2; i < c; i++)
	{
		if (c%i == 0) { flag = 1; break; }
	}

	return flag;

}