#include <stdio.h>
#include <string.h>

int main(void)
{
	static char a[100000];
	static char b[100000];

	scanf_s("%s", a, 100000);
	scanf_s("%s", b, 100000);
	//scanf("%s", a);
	//scanf("%s", b);
	unsigned int a_len = strlen(a);
	unsigned int b_len = strlen(b);

	unsigned int len_min=0;
	len_min = a_len < b_len? a_len : b_len;

	unsigned int len_max=0;
	len_max = a_len > b_len ? a_len : b_len;
	//printf("%d", len_min);
	//printf("%d", len_max);

	unsigned int i=0;
	unsigned int j=0;


	int temp = 0;
	if (a_len < b_len)
	{
		temp = a_len;

		while (strlen(a) < strlen(b))
		{
			a[temp] =' ';
			temp++;
		}
	}


	//printf("%s\n", a);
	if (a_len > b_len)
	{
		temp = b_len;

		while (strlen(a) > strlen(b))
		{
			b[temp] = ' ';
			temp++;
		}
	}

	char x[200] = {'\0'};

	//a¶Ì
	if (a_len < b_len)
	{
		while ((i/2) < len_min+1)
		{
			x[i] = b[j];
			x[i + 1] = a[j];
			j++;
			i += 2;
		}

		for (i = 0; i < b_len*2 + 1; i++)
		{
			if (x[i] != 0)
			{
				printf("%c", x[i]);
			}
		}
	}
	//b¶Ì
	else
	{
		while ((i/2) < len_min+1)
		{
			x[i] = a[j];
			//printf("%s\n", x);
			x[i + 1] = b[j];
			//printf("%s\n", x);
			j++;
			i += 2;
		}

		for (i = 0; i < a_len*2 + 1; i++)
		{
			if (x[i] != 0)
			{
				printf("%c", x[i]);
			}
		}
	}

	return 0;
	

}