#include <stdio.h>

int main()
{
    int x;
    //scanf("%d",&x);
	scanf_s("%d", &x);

    int i;
	int count=0;

    for (i=2;i<x;i++)
    {
		if (x%i != 0)
		{
			count++;
		}
    }


	if (count == x - 2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

    return 0;
}