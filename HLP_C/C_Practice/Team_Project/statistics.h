// -*- coding: utf-8 -*-
// @Time      : 2020/12/26
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : statistic.h
// @Software  : Visual Studio
// Here We Go!

#include <stdio.h>
#include <ctype.h>
#define MAX 1000

void statistic(char words[1000][1000], int ro, int clo)
{
	//int i;

	/*
	for (i = 0; i < ro; i++)
	{
		printf("test:%s\n", words[i]);
	}
	*/

	struct Words
	{
		char all_words[MAX];
		int num_words=0;
	}sta_words[MAX];


	int i;
	int j;
	int k;
	int len;


	int i2;
	int j2;
	int k2;
	int flag;

	int start;
	int end;
	for (i = 0; i < ro; i++)
	{
		for (j = 0; words[i][j] != '\0'; i++)
		{
			if (isalpha(words[i][j]) != 0)
			{
				start = j;
				k = start;
				if (isalpha(words[i][k]) != 0 && isalpha(words[i][k + 1]) == 0)
				{
					end = k;
				}
				len = end - start + 1;


				for (i2 = 0; i2 < MAX; i++)
				{
					for (j2 = 0; j2 < MAX; j++)
					{
						for (; start<=end; start++)
						{
							if (words[i][start] == sta_words[i2].all_words[j2])
							{
								flag == 1;
							}
							else
							{
								flag == 0;
							}
						}

						if (flag == 0)
						{

						}
					}
				}

			}
		}
	}


}