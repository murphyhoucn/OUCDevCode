#include <stdio.h>

int main()
{
	int f1 = 1, f2 = 1, f3;

	printf("%12d\n%12d\n", f1, f2);

	for (int i = 1; i < 39; i++)
	{
		f3 = f1 + f2;
		printf("%12d\n", f3);
		//printf("%d\n", i);

		f1 = f2;
		f2 = f3;
	}

	return 0;
}