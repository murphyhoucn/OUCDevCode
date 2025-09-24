#include <stdio.h>


int main()
{
	int f1 = 1;
	int f2 = 1;

	
	for (int i = 1; i < 21; i++)
	{
		printf("%12d %12d", f1, f2);
		if (i % 2 == 0) { printf("\n"); }
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

	return 0;
}