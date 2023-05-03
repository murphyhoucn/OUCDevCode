#include <stdio.h>
#define N 5

int main(void)
{

	void nixu(int *p, int n);

	int array[N];

	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}


	nixu(array,	N);
	return 0;


}
void nixu(int *p, int n)
{
	int i;
	for (i = N - 1; i >= 0; i--)
	{
		printf("%d ", *(p + i));
	}
}
