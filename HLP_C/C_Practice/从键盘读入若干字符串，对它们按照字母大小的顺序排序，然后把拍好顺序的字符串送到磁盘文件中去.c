#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	errno_t err;
	char str[3][10], temp[10];
	int i, j, k;
	int n = 3;

	printf("enter string:\n");
	for (i = 0; i < n; i++)
	{
		gets(str[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i+1; i < n; j++)
		{
			if (strcmp(str[k], str[j]) > 0)
			{
				k = j;

			}
		}
		if (k != i)
		{
			strcpy_s(temp, str[i],20);
			strcpy_s(str[i] , str[k],20);
			strcpy_s(str[k], temp,20);
		}
	}

	if ((fopen_s(&fp, "file.txt", "w")) == NULL)
	{
		printf("can not open the file!\n");

		exit(0);
	}

	printf("\n the new sequence:\n");
	for (i = 0; i < n; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}

	return 0;
}