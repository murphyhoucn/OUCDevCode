//�󽻼��ĺ���

#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _INTER_H_
#define _INTER_H_

void inter(int* arr_a, int* arr_b, int a_le, int b_le)
{

	//��Ϊ���󼯺ϵĽ�����������Ԫ�ص�����һ������������д����һ��������������������ȡ������ĳ���Ϊ�����д����һ��
	int len_c;
	len_c = a_le > b_le ? a_le : b_le; 


	//���������鲢��ʼ��
	int* array_c;
	array_c =(int*)malloc(sizeof(int) * len_c);

	int i;
	int j;
	int k = 0;

	for ( i= 0; i < a_le; i++)//��������a
	{
		for ( j= 0; j < b_le; j++)//��������b
		{
			if (arr_a[i] == arr_b[j])  //�������a������b�е�Ԫ����ͬ����ô��Ԫ�ؾ����ڽ����е�Ԫ�أ��Ͱ��������½���������
			{
				array_c[k] = arr_a[i];
				k++;
			}
		}
	}

	//ð�������㷨��������������
	int a;
	int b;
	int temp;
	for (b = 0; b < k - 1; b++)
	{
		for (a = 0; a < k - 1 - b; a++)
		{
			if (array_c[a] > array_c[a + 1])//ð�������㷨�������Ҫ������������Ļ����͸��ĳ�С�ں�
			{
				temp = array_c[a];
				array_c[a] = array_c[a + 1];
				array_c[a + 1] = temp;
			}
		}
	}


	//������ļ���
	cout << "inter array_a and array_b is:";
	for (int i = 0; i < k; i++)
	{
		cout << array_c[i] << " ";
	}
	cout << endl;
}

#endif