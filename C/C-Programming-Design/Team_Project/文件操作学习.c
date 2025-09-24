// -*- coding : utf-8 -*-
// @Time      : 2020/12/20
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : main.c
// @Software  : Visual Stdio
// Here We Go!


//    D:\C_Programming_Language\Team_Project\Team_Project\test.txt


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "start_page.h"

#define N 100


int main(void)
{
	//<definition and initialization>
	char file_path[N];
	char buffer[N];

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
		printf("\033[31;4mERROR!\033[0m\n");  //ASCII ÑÕÉ«×ª»»
		exit(-1);
	}
	//</judeging the reading documnet>
	fgets(buffer, N, fp);
	puts(buffer);


	return 0;

}