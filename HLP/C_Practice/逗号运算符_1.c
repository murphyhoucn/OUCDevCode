#include <stdio.h>
int main()
{
	int i,j;
	i = (3 + 4, 5 + 6);
	j = 3+4, 5 + 6;
	printf("%d\n", i);
	printf("%d\n", j);

	return 0;
}