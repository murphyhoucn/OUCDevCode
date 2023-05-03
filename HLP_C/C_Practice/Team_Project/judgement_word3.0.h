// -*- coding : GB2312 -*-
// @Time      : 2021/1/7
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : judgement_word3.0.h
// @Software  : Visual Studio
// Here We Go!

/*
	judgement_word�ļ�����������

		1.����judgement_word
			��������ļ��ַ�������file_array�������ҳ�����
		2. ����judgement_in_structure
			��judgement_word�жϳ����ĵ����롰�⡱�еĵ��ʽ��бȽϣ�
			��������Ѵ��ڡ��⡱�У��õ��ʵ���Ŀ+1�����򣬾�˵������������µĵ���
*/

#include <string.h>
#include "output3.0.h"  //����output����



struct Words  //����һ���ṹ�����飬����ǡ����ʿ⡱
{
	char words[100];
	int one_word_num;
}file_words[10000];

//struct Words *fwp = file_words;

int different_words_num = 0;//���������������ļ���һ���ж��ٲ�ͬ�ĵ���

void judgement_in_structure(char temp_one_word[]);  //����judgement_in_structure����
void output_warehouse(void);

void judgement_word(char file_array[])
{
	int i;
	for (i = 0; i < 10000; i++)
	{
		file_words[i].one_word_num = 1;  //�Կ��е�����Ŀ���г�ʼ��
	}

	//printf("fun:judgement_word into success!\n");

	int j = 0;
	int flag1;
	int flag2;
	char temp_one_word[100];

	for (i = 0; file_array[i] != '\0'; i++)
	{
		//printf("test:%c\n", file_array[i]);
		flag1 = isalpha(file_array[i]);  //�жϸ��ַ��͸��ַ������ǲ�����ĸ���Ӷ��жϳ��ǲ��ǵ���
		flag2 = isalpha(file_array[i + 1]);

		if (flag1 != 0)
		{
			temp_one_word[j] = file_array[i];  //�������ַ����ǵ��ʵ����һ����ĸ�������ַ��浽temp_one_word��
			j++;
		}
		else if (flag1 == 0 && flag2 != 0) //�������ַ��ǵ��ʵ����һ����ĸ�����õ��ʴ���judgement_in_structure�����н����ж�
		{
			temp_one_word[j] = '\0';   //�õ�һ������
			//printf("test:trans word:%s\n", temp_one_word);

			judgement_in_structure(temp_one_word);//���ݸõ��ʵ�������

			j = 0;// temp_one_word�ַ�������
		}
	}



	//ð�����򷨣��Կ��е��ʽ��и��������򣬴Ӷ��ҳ�����Ҫ��ĵ���

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


//����鿴�������еĵ���

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