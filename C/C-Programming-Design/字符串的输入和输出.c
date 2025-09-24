#include <stdio.h>
#include <string.h>

#define R 10
#define C 10

int main(void)
{

	int i;

	char twod_array[R][C];

	//gets_s(twod_array, 100);
	


	for (i = 0; i < R; i++)
	{
		scanf_s("%s", twod_array[i], 10);
	}
	
	
	
	for (i = 0; i < R; i++)
	{
		printf("%s ", twod_array[i]);
	}
	printf("\n");
	//puts(twod_array);
	
	for (i = 0; twod_array[0][i]!='\0'; i++)
	{
		printf("%c=%d\n", twod_array[0][i], twod_array[0][i]);
	}
	

	return 0;
}