// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : main3.0.c
// @Software  : Visual Studio
// Here We Go!

//#define _CRT_SECURE_NO_DEPRECATE 

/*
	main文件功能描述：
		程序的主体部分
		对基本变量定义和初始化
		实现文件路径的读入
		调用start函数
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "start3.0.h"    //声明start函数
#include "read3.0.h"      //声明read函数

#define N 100

int main(void)
{
	//<定义与初始化>
	char file_path[N];
	FILE *fp = NULL;
	errno_t err = 0;

	//<调用开始函数>
	start();
	//printf("test:fun:start success!\n");


	//<input path>
	printf("Please Input The File Path:");
	gets_s(file_path, N);

	err = fopen_s(&fp, file_path, "r");

	//<judeging the reading documnet>
	if ((err != 0))
	{
		printf("\033[31;4mWARNING\033[0m\n");  //ASCII 颜色转换
		printf("\033[31;4mFile Path Error\033[0m\n");  //ASCII 颜色转换
		printf("\033[31;4mPleasa Restart The Programming!\033[0m\n");  //ASCII 颜色转换

		exit(-1);
	}


	//<调用read函数>
	read(fp);


	//<关闭文件>
	fclose(fp);
	return 0;
}