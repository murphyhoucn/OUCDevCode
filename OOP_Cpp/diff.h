#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _DIFF_H_
#define _DIFF_H_

void diff(int* arr_a, int* arr_b, int a_le, int b_le)
{

	int i;
	int j;

	//���岢��ʼ�������µ�����
	int* array_c;
	array_c=(int*)malloc(sizeof(int) * a_le);//�Ȱ�arr_a�е�Ԫ��ȫ�����룬�����һ���м�Ĺ�������


	int* array_d;
	array_d = (int*)malloc(sizeof(int) * a_le);//������arr_a��arr_b�Ľ�����������ʱ������


	int* array_e;
	array_e = (int*)malloc(sizeof(int) * a_le); //���յĽ�������������



	//����arr_a����arr_a�е�ȫ��Ԫ���ȷŵ�array_c��
	for (int i = 0; i < a_le; i++)
	{
		array_c[i] = arr_a[i];
	}


	//���ҵ�arr_a��arr_b�Ľ������ŵ�array_d��ȥ
	int xx = 0;
	for (int i = 0; i < a_le; i++)
	{
		for (int j = 0; j < b_le; j++)
		{
			if (arr_a[i] == arr_b[j])
			{
				array_d[xx] = arr_a[i];
				xx++;
			}
		}
	}

	//�����õĴ���
	//cout << "test:" << endl;
	//for (i = 0; i < xx; i++)
	//{
	//	cout << array_d[i] << " ";
	//}
	//cout << endl;



	int x = 0;
	for ( i= 0; i < a_le; i++) //����d (����)
	{
		int flag = 0;//����һ����־λ
		for (j= 0; j < xx; j++) //����c��arr_a��
		{
			if (array_d[j] == array_c[i])//����array_d��array_d�ж��е�Ԫ�أ��������󽻼���ʱ��Ҫ��ЩԪ�أ����������һ�����flag = 1
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)  //flag = 0����ô����������֮ǰ��Ҫ����Ҫ������뵽���յĽ������array_e��
		{
			//cout << "test:" << array_c[i] << endl;
			array_e[x++] = array_c[i];
		}
	}

	//���Դ���
	//cout << "test:" << endl;
	//cout << x << endl;

	//for (i = 0; i < x; i++)
	//{
	//	cout << array_e[i] << " ";
	//}
	//cout << endl;

	//ð������   ����
	int a;
	int b;
	int temp;
	for (b = 0; b < x - 1; b++)
	{
		for (a = 0; a < x - 1 - b; a++)
		{
			if (array_c[a] > array_c[a + 1])
			{
				temp = array_c[a];
				array_c[a] = array_c[a + 1];
				array_c[a + 1] = temp;
			}
		}
	}


	cout << "diff array_a and arrar_b is:";
	for (int i = 0; i < x; i++)
	{
		cout << array_e[i] << " ";
	}
	cout << endl;
}

#endif