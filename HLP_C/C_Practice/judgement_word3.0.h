// -*- coding : GB2312 -*-
// @Time      : 2021/1/7
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : judgement_word3.0.h
// @Software  : Visual Studio
// Here We Go!

/*
	judgement_word文件功能描述：

		1.函数judgement_word
			遍历存放文件字符的数组file_array，从中找出单词
		2. 函数judgement_in_structure
			将judgement_word判断出来的单词与“库”中的单词进行比较，
			如果单词已存在“库”中，该单词的数目+1，否则，就说明这个单词是新的单词
*/

#include <string.h>
#include "output3.0.h"  //声明output函数



struct Words  //声明一个结构体数组，这就是“单词库”
{
	char words[100];
	int one_word_num;
}file_words[10000];

//struct Words *fwp = file_words;

int different_words_num = 0;//声明变量，代表文件中一共有多少不同的单词

void judgement_in_structure(char temp_one_word[]);  //声明judgement_in_structure函数
void output_warehouse(void);

void judgement_word(char file_array[])
{
	int i;
	for (i = 0; i < 10000; i++)
	{
		file_words[i].one_word_num = 1;  //对库中单词数目进行初始化
	}

	//printf("fun:judgement_word into success!\n");

	int j = 0;
	int flag1;
	int flag2;
	char temp_one_word[100];

	for (i = 0; file_array[i] != '\0'; i++)
	{
		//printf("test:%c\n", file_array[i]);
		flag1 = isalpha(file_array[i]);  //判断该字符和该字符后面是不是字母，从而判断出是不是单词
		flag2 = isalpha(file_array[i + 1]);

		if (flag1 != 0)
		{
			temp_one_word[j] = file_array[i];  //读到的字符不是单词的最后一个字母，将该字符存到temp_one_word中
			j++;
		}
		else if (flag1 == 0 && flag2 != 0) //读到的字符是单词的最后一个字母，将该单词传到judgement_in_structure函数中进行判断
		{
			temp_one_word[j] = '\0';   //得到一个单词
			//printf("test:trans word:%s\n", temp_one_word);

			judgement_in_structure(temp_one_word);//传递该单词到函数中

			j = 0;// temp_one_word字符串重置
		}
	}



	//冒泡排序法，对库中单词进行个数的排序，从而找出符合要求的单词

	int different_words_num0 = different_words_num;
	int a;
	int b;
	int tempn;
	char temps[100];

	for (a = 0; a < different_words_num0 - 1; a++)
	{
		for (b = 0; b < different_words_num0 - 1 - a; b++)
		{
			if (file_words[b].one_word_num < file_words[b + 1].one_word_num)
			{
				tempn = file_words[b + 1].one_word_num;
				file_words[b + 1].one_word_num = file_words[b].one_word_num;
				file_words[b].one_word_num = tempn;

				strcpy_s(temps, strlen(file_words[b + 1].words) + 1, file_words[b + 1].words);
				strcpy_s(file_words[b + 1].words, strlen(file_words[b].words) + 1, file_words[b].words);
				strcpy_s(file_words[b].words, strlen(temps) + 1, temps);
			}
		}
	}



	printf("Do you want to check all the words of the file?(YES/NO):");
	char yn[5];
	gets_s(yn, 5);
	//puts(yn);
	//printf("%d",strcmp(yn, "YES"));
	if (strcmp(yn, "YES") != 0)
	{
		printf("OK!Fine!\n");
		printf("\n");
	}
	else
	{
		output_warehouse();
	}

	printf("1st:%s\t%d\n", file_words[0].words, file_words[0].one_word_num);
	printf("2nd:%s\t%d\n", file_words[1].words, file_words[1].one_word_num);
	printf("3rd:%s\t%d\n", file_words[2].words, file_words[2].one_word_num);

	int all_words_num = 0;
	for (i = 0; i < different_words_num; i++)
	{
		all_words_num += file_words[i].one_word_num;
	}

	output(different_words_num, all_words_num);
}

int newword_flag = 1;
int i;

void judgement_in_structure(char temp_one_word[])
{
	//printf("test:trans word:%s\n", temp_one_word);

	//printf("test:fun judgement_word into success!\n");
	for (i = 0; i < different_words_num; i++)
	{
		if (strcmp(temp_one_word, file_words[i].words) == 0)
		{
			newword_flag = 0;
			file_words[i].one_word_num++;
			break;
		}
		else
		{
			newword_flag = 1;
		}
	}
	if (newword_flag == 1)
	{
		//printf("test:%d\n", different_words_num);
		strcpy_s(file_words[different_words_num].words, strlen(temp_one_word)+1, temp_one_word);
		different_words_num++;
	}
}


//输出查看库中所有的单词

void output_warehouse(void)
{
	int count = 0;
	printf("\n");
	printf("\n**************************************************************************************************************\n");

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
			printf("        ");
		}
	}
	printf("\n**************************************************************************************************************\n");
	printf("\n");
}