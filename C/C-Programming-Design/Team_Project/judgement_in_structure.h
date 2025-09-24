// -*- coding : GB2312 -*-
// @Time      : 2021/1/7
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : judgement_in_structure.h
// @Software  : Visual Studio
// Here We Go!



int newword_flag = 1;
int i;

//void judgement_in_structure(char temp_one_word[], int *total_words_num, char *fwp_words,int *fwp_one_word_num)

void judgement_in_structure(char temp_one_word[], int *total_words_num, struct Words *fwp)
{
	printf("test:fun judgement_word into success!\n");
	for (i = 0; i < *total_words_num; i++)
	{
		if (strcmp(temp_one_word, fwp[i].words) == 0)
			//if (strcmp(temp_one_word, (*fwp_words+i)) == 0)
		{
			newword_flag = 0;
			fwp[i].one_word_num++;
			//*(fwp_one_word_num+i)++;
			break;
		}
		else
		{
			newword_flag = 1;
		}
	}
	if (newword_flag == 1)
	{
		strcpy_s(fwp[*total_words_num].words, strlen(temp_one_word), temp_one_word);
		//strcpy_s((*fwp_words + *total_words_num), strlen(temp_one_word), temp_one_word);
		*total_words_num++;
	}
}