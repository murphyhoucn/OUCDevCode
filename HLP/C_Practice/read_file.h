// -*- coding : utf-8 -*-
// @Time      : 2020/12/20
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : read_file.h
// @Software  : Visual Studio
// Here We Go!

#include "statistics.h"

void read_fun(char *buffer,int M ,FILE *fp,int row_count)
{
	int i = 0;
	int j = 0;
	
	
	/*
	//声明一个二维数组，行数为文件行数，列数为M（1000)
	char **row;
	row=(char **)malloc(row_count * sizeof(char)); //二维数组行数
	for (i = 0; i < row_count; i++)
	{
		row[i] = (char*)calloc(	M,sizeof(char) ); //二维数组列数
	}
	*/


	char row[1000][1000] = { '\0' };

	while (!feof(fp))
	{
		fgets(buffer, M, fp);

		//puts(buffer);
		//printf("%s", buffer);
		
		for (j = 0; buffer[j] != '\0'; j++)
		{
			row[i][j] = buffer[j];
		}
		i++;
	}
	/*
	for (i = 0;i< row_count; i++)
	{
		//printf("%s\n", doc[i].row);
		puts(row[i]);
	}
	*/

	/*
	for (i = 0; i < row_count; i++)
	{
		//printf("%s\n", doc[i].row);
		//puts(row[i]);


		for (j = 0; row[i][j] != '\0'; j++)
		{
			printf("test i :%d\n", i);
			printf("test j :%d\n", j);
			printf("test c %c\n", row[i][j]);

			if (isalpha(row[i][j]) == 0)
			{
				row[i][j] = ' ';
			}

		}
	}


	*/
	
	/*
		for (i = 0;i< row_count; i++)
	{
		//printf("%s\n", doc[i].row);
		puts(row[i]);
	}
	*/

	statistic(row, row_count,M);
}
