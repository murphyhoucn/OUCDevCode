#include <stdio.h>

int main()
{
	for (int i = 1800; i < 2501; i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			printf("%dÄêÊÇÈòÄê\n", i);
		}
	}
	return 0;
}