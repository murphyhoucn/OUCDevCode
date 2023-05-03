// -*- coding : utf-8 -*-
// @Time      : 2020/12/26
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : judge_row.h
// @Software  : Visual Studio
// Here We Go!

int judge_row(FILE *fp)
{
	int count=0;
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '\n')
		{
			count++;
		}
	}
	printf("*****************test:rows=%d***************************\n",count);
	//printf("\n");
	return count;
}