#include <stdio.h>

int main()
{

	for (int i = 100; i < 201; i++)
	{
		if (i % 3 == 0) { continue; }
		else
		{
			printf("%d   ", i);
		}
	}


	return 0;
}