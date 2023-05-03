#include <stdio.h>
#include<string.h>

#define N 1000
#define S '-'

int main(void)
{
	//void expand(char s1[], char s2[]);
	void expand(char s2[]);

	//char s1[N] = { '\0' };
	char s2[N];

	//gets_s(s2, N);
	gets(s2);

	//expand(s1, s2);

	expand(s2);

	return 0;
}

void expand(char s2[])
{
	int i;
	int j;

	for (i = 0;  s2[i] != '\0'; i++)
	{
		if (s2[i] == S)
		{ 
			if (s2[i - 1] < s2[i + 1])
			{
				if (i == 1)
				{
					printf("%c", s2[i - 1]); // 第一个 不参与
				}
				

				for (j = 1; j < (s2[i + 1] - s2[i - 1])+1; j++)
				{
					//printf("test:%d\n", j);
					printf("%c", s2[i - 1] + j);
				}
			}
			else
			{
				printf("%c", s2[i]);
				printf("%c", s2[i + 1]);
			}
		}
	}

}

