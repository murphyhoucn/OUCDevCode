#include <stdio.h>
#include<string.h>
#define N 1000
#define S '-'
int main(void)
{
	void expand(char s1[], char s2[]);

	char s1[N] = {'\0'};
	char s2[N];

	gets_s(s2, N);
	//gets(s2);

	expand(s1, s2);

	return 0;
}

void expand(char s1[], char s2[])
{
	int i, j;
	char temp;

	for (i = 0,j=0; s2[i] != '\0'; i++)
	{
		if (s2[i] == S)
		{
			if (i == 0)
			{
				s1[j++] = S;
			}
			else if ((s2[i - 1] >= 97 && s2[i - 1] <= 122) 
				&& (s2[i + 1] >= 97 && s2[i + 1] <= 122))
			{
				for (temp = s2[i - 1]; 
					temp <= s2[i + 1]; 
					s1[j] = temp, j++, temp++);
			}

			else if ((s2[i - 1] >= 65 && s2[i - 1] <= 90) 
				&& (s2[i + 1] >= 65 && s2[i + 1] <= 90))
			{
				for (temp = s2[i - 1]; 
					temp <= s2[i + 1]; 
					s1[j] = temp, j++, temp++);
			}

			else if ((s2[i - 1] >= 48 && s2[i - 1] <= 57) 
				&& (s2[i + 1] >= 48 && s2[i + 1] <= 57))
			{
				for (temp = s2[i - 1]; 
					temp <= s2[i + 1]; 
					s1[j] = temp, j++, temp++);
			}

			else
				s1[j++] = s2[i];
		}
	}
	
	s1[j] = '\0';
	puts(s1);

}