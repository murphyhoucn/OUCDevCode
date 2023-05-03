// -*- coding : GB2312 -*-
// @Time      : 2021/1/7
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : read3.0.h
// @Software  : Visual Studio
// Here We Go!


/*
	read函数功能描述：
		把文件中所有的字符读到file_array中
		相比于从文件中直接读取字符串判断是否是一个完整的单词，先将文件中的所有的字符读入到数组中更方便
		
*/


//judgement_word函数
#include "judgement_word3.0.h"

char file_array[100000]; //声明一个数组用来存放文件中所有的字符

void read(FILE *fp)
{
	//printf("test:fun:read into!\n");
	char ch;
	int i = 0;
	ch = fgetc(fp);
	while (!feof(fp))   //遍历文件
	{
		file_array[i] = ch;
		ch = fgetc(fp);
		i++;
	}

	//进行该操作主要是处理文件的最后一个单词
	file_array[i] = ' ';     
	file_array[i+1] = 'X';
	
	/*for (i = 0; file_array[i] != '\0'; i++)
	{
		printf("out test:%c\n", file_array[i]);
	}
	printf("************\n");
	*/
	

	//printf("test:fun:read success!\n");
	judgement_word(file_array);	 //将file_array传到judgement_word中

}
