#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;
	scanf_s("%d", &n);
	int jiecheng = 1;

start:if (i < n+1)
	{
		jiecheng *= i;
		i++;
		goto start;
	}

	  printf("%d", jiecheng);

	  return 0;
}