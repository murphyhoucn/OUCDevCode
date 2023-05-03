#include <stdio.h>

int main()
{
	int f1 = 1;
	int f2 = 1;

	printf("%12d\n", f1);
	printf("%12d\n", f2);
	for (int i = 1; i < 39; i++)
	{
		printf("%12d\n", f1 + f2);
		int termp;
		termp = f1;
		f1 = f2;
		f2 = termp + f1;
	}

	return 0;
}