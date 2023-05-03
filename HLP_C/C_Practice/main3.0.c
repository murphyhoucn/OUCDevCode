// -*- coding : GB2312 -*-
// @Time      : 2021/1/3
// @Author    : MurphyHou
// @Proj_Name : Team_Project
// @File_Name : main3.0.c
// @Software  : Visual Studio
// Here We Go!

//#define _CRT_SECURE_NO_DEPRECATE 

/*
	main�ļ�����������
		��������岿��
		�Ի�����������ͳ�ʼ��
		ʵ���ļ�·���Ķ���
		����start����
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "start3.0.h"    //����start����
#include "read3.0.h"      //����read����

#define N 100

int main(void)
{
	//<�������ʼ��>
	char file_path[N];
	FILE *fp = NULL;
	errno_t err = 0;

	//<���ÿ�ʼ����>
	start();
	//printf("test:fun:start success!\n");


	//<input path>
	printf("Please Input The File Path:");
	gets_s(file_path, N);

	err = fopen_s(&fp, file_path, "r");

	//<judeging the reading documnet>
	if ((err != 0))
	{
		printf("\033[31;4mWARNING\033[0m\n");  //ASCII ��ɫת��
		printf("\033[31;4mFile Path Error\033[0m\n");  //ASCII ��ɫת��
		printf("\033[31;4mPleasa Restart The Programming!\033[0m\n");  //ASCII ��ɫת��

		exit(-1);
	}


	//<����read����>
	read(fp);


	//<�ر��ļ�>
	fclose(fp);
	return 0;
}