// -*- coding : GB2312 -*-
// @Time      : 2021/1/7
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : read3.0.h
// @Software  : Visual Studio
// Here We Go!


/*
	read��������������
		���ļ������е��ַ�����file_array��
		����ڴ��ļ���ֱ�Ӷ�ȡ�ַ����ж��Ƿ���һ�������ĵ��ʣ��Ƚ��ļ��е����е��ַ����뵽�����и�����
		
*/


//judgement_word����
#include "judgement_word3.0.h"

char file_array[100000]; //����һ��������������ļ������е��ַ�

void read(FILE *fp)
{
	//printf("test:fun:read into!\n");
	char ch;
	int i = 0;
	ch = fgetc(fp);
	while (!feof(fp))   //�����ļ�
	{
		file_array[i] = ch;
		ch = fgetc(fp);
		i++;
	}

	//���иò�����Ҫ�Ǵ����ļ������һ������
	file_array[i] = ' ';     
	file_array[i+1] = 'X';
	
	/*for (i = 0; file_array[i] != '\0'; i++)
	{
		printf("out test:%c\n", file_array[i]);
	}
	printf("************\n");
	*/
	

	//printf("test:fun:read success!\n");
	judgement_word(file_array);	 //��file_array����judgement_word��

}
