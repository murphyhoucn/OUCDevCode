#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	void expand(char s1[], char s2[]);

	char s1[100], s2[100];
	gets(s1);
	expand(s1, s2);
	printf("%s", s2);
	return;
}

void expand(char s1[], char s2[])
{
	int len = strlen(s1);
	int i, j = 0, k;
	s2[0] = s1[0];
	for (i = 1; i < len; i += 2)
		if (s1[i - 1] < s1[i + 1])
			for (k = 1; k <= (s1[i + 1] - s1[i - 1]); k++)
				s2[++j] = s1[i - 1] + k;
		else
		{
			s2[++j] = '-';
			s2[++j] = s1[i + 1];
		}
	s2[++j] = '\0';
	return;
}