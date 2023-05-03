// -*- coding : utf-8 -*-
// @Time      : 2020/12/20
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : main.c
// @Software  : Visual Studio
// Here We Go!

//    D:\C_Programming_Language\Team_Project\Team_Project\test.txt
//    D:\C_Programming_Language\Team_Project\Team_Project\Little Prince.txt

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "start_page.h"
#include "read_file.h"
#include "judge_row.h"


#define N 100
#define M 1000 * sizeof(char)

int main(void)
{
	//<definition and initialization>
	char file_path[N];
	//char buffer[N];

	char *buffer = {'\0'};
	buffer = (char *)malloc(M);  //dynamic array

	FILE *fp = NULL;
	errno_t err=0;
	//</definition and initialization>

	//<welcome page>
	start();
	//</welcome page>

	//<input path>
	printf("please input the path:");
	//gets(file_path);
	gets_s(file_path, N);     //Visual Studio
	//</input path>

	err = fopen_s(&fp, file_path, "r");

	//<judeging the reading documnet>
	//if (err!=NULL)
	//if ((err != 0) || (fp))
	if ((err != 0))
	{
		printf("\033[31;4mERROR!\033[0m\n");  //ASCII 颜色转换
		exit(-1);
	}
	//</judeging the reading documnet>

	//<judege the rows of the doc>
	int row_count =judge_row(fp);
	//</judege the rows of the doc>
	
	//<function: reset fp>
	rewind(fp);   //因为前面判断行数时，文件指针已经遍历了文件，函数使指针重新指向文件开头
	//</function: reset fp>

	read_fun(buffer, M, fp, row_count);

	
	fclose(fp);
	return 0;

}