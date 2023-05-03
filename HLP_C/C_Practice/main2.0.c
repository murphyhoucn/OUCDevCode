// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : main2.0.c
// @Software  : Visual Studio
// Here We Go!

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//#include <stddef.h>

#include "start2.0.h"
#include "read3.0.h"


#define N 100

int main(void)
{
	//<definition and initialization>
	char file_path[N];
	FILE *fp = NULL;
	errno_t err = 0;
	//</definition and initialization>

	//<welcome page>
	start();
	//printf("test:fun:start success!\n");
	printf("\n");

	//</welcome page>

	//<input path>
	printf("please input the path:");
	gets_s(file_path, N);
	//</input path>

	err = fopen_s(&fp, file_path, "r");

	//<judeging the reading documnet>
	if ((err != 0))
	{
		printf("\033[31;4mERROR!\033[0m\n");  //ASCII ÑÕÉ«×ª»»
		exit(-1);
	}
	//</judeging the reading documnet>

	read(fp);

	fclose(fp);
	return 0;
}