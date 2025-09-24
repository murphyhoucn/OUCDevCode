#include <stdio.h>

int main()
{
	int n[5] = { 1,2,3,4,5 };
	int g[5] = { 80,90,85,100,10 };

	for (int i = 0; i < 5; i++)
	{
		if (g[i] >= 85) { printf("%d\n", n[i]); }
	}

	return 0;
}