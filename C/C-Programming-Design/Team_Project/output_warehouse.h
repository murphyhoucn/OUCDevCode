// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : output_warehouse.h
// @Software  : Visual Sutdio
// Here We Go!
	//输出库中所有的单词


void output_warehouse(int different_words_num)
{
	int count = 0;
	for (i = 0; i < different_words_num; i++)
	{
		printf("%s: ", file_words[i].words);
		printf("%d", file_words[i].one_word_num);
		count++;
		if (count % 5 == 0)
		{
			printf("\n");
		}
		else
		{
			printf("       ");
		}
	}
	printf("\n*******************************************************\n");
	printf("\n");
}