// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : judgement2.0.h
// @Software  : Visual Studio
// Here We Go!

#include "output2.0.h"

struct Words
{
	char words[100];
	int num;
}file_words[10000];

void judgement(char temp_one_word0[])
{
	int i;

	for (i = 0; i < 10000; i++)
	//for (i = 0; i < 10; i++)
	{
		file_words[i].num = 0;
	}
	int word_struct_number = 0;
	int flag = 0;

	for (i = 0; i < word_struct_number; i++)
	{
		if (strcmp(temp_one_word0, file_words[i].words) == 0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		strcpy_s(file_words[word_struct_number].words, strlen(temp_one_word0)+1, temp_one_word0);
		word_struct_number++;
	}
	else
	{
		for (i = 0; i < word_struct_number; i++)
		{
			if (strcmp(temp_one_word0, file_words[i].words) == 1)
			{
				file_words[i].num++;
			}
		}
	}

	for (i = 0; i < word_struct_number; i++)
	{
		puts(file_words[i].words);
		printf("file_words.num:%d\n", file_words[i].num);
		printf("\n");
	}

	//ц╟ещ
	int word_struct_number0 = word_struct_number;
	int a;
	int b;
	int tempn;
	char temps[100];

	for (a = 0; a < word_struct_number0 - 1; a++)
	{
		for (b = 0; b < word_struct_number0 - 1 - a; b++)
		{
			if (file_words[b].num < file_words[b + 1].num)
			{
				tempn = file_words[b + 1].num;
				file_words[b + 1].num = file_words[b].num;
				file_words[b].num = tempn;

				strcpy_s(temps, strlen(file_words[b + 1].words) + 1, file_words[b + 1].words);
				strcpy_s(file_words[b + 1].words, strlen(file_words[b].words) + 1, file_words[b].words);
				strcpy_s(file_words[b].words, strlen(temps) + 1, temps);
			}
		}
	}


	int totalnum = 0;
	for (i = 0; i < word_struct_number0; i++)
	{
		totalnum += file_words[i].num;
	}
	printf("1st:%s\t%d\n", file_words[0].words, file_words[0].num);
	printf("2nd:%s\t%d\n", file_words[1].words, file_words[1].num);
	printf("3rd:%s\t%d\n", file_words[2].words, file_words[2].num);


	output();
}