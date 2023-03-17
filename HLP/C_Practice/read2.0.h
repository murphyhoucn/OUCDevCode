// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : read2.0.h
// @Software  : Visual Studio
// Here We Go!

#include "judgement2.0.h"

char temp_one_word[30];

void read(FILE *fp)
{
	char c;
	int count = 0;

	printf("fun:read into\n");

	while ((c = fgetc(fp)) != EOF)
	{
		if (isalpha(c) == 1)
		{
			temp_one_word[count] = c;
			count++;
		}
		else
		{
			temp_one_word[count] = '\0';

			printf("trans word:%s\n", temp_one_word);
			judgement(temp_one_word);
			printf("fun:judgement success!\n");
		}
		temp_one_word[0] = '\0';
		count = 0;
	}
}
