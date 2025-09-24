//@Author  : MurphyHou 

//    Here We Go!     

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[1000] = { "\0" };
	char s2[1000] = { "\0" };
	scanf_s("%s", s1, 1000);
	scanf_s("%s", s2, 1000);

	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	//printf("%d\n", s1_len);

	int i;

	int temp = 0;
	for (i = 0; i < s1_len; i++)
	{
		if (47 < s1[i] && s1[i] < 58)
		{
			temp += (s1[i] - 48);
		}
		else
		{
			switch (s1[i])
			{
			case 'a': temp += 10; break;
			case 'b': temp += 11; break;
			case 'c': temp += 12; break;
			case 'd': temp += 13; break;
			case 'e': temp += 14; break;
			case 'f': temp += 15; break;
			}
		}
	}

	printf("%d\n", temp);

	int temp2 = 0;
	for (i = 0; i < s2_len; i++)
	{
		if (47 < s2[i] && s2[i] < 58)
		{
			temp += (s2[i] - 48);
		}
		else
		{
			switch (s2[i])
			{
			case 'a': temp2 += 10; break;
			case 'b': temp2 += 11; break;
			case 'c': temp2 += 12; break;
			case 'd': temp2 += 13; break;
			case 'e': temp2 += 14; break;
			case 'f': temp2 += 15; break;
			}
		}
	}
	printf("%d\n", temp2);
	return 0;
}