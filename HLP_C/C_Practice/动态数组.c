#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void check(int *p);
	int *p1;
	int i;

	p1 = (int *)malloc(5 * sizeof(int));

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", p1 + i);
	}

	check(p1);
	free(p1); //释放动态内存空间

	return 0;
}

void check(int *p)
{
	int i;
	printf("fail:");
	for (i = 0; i < 5; i++)
	{
		if (p[i] < 60)
		{
			printf("%d\n", *(p+i));
		}
	}

}

