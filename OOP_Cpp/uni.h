#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _UNI_H_
#define _UNI_H_

void uni(int* arr_a, int* arr_b, int a_le, int b_le)
{
	int count = a_le;//�����Ȱ�����arr_a�е�Ԫ��ȫ���ŵ�array_c�У���ô����arr_b�е�Ԫ����������array_c��������Ļ����±�ʹ�a_le��ʼ����������ȶ����������������40��

	int flag;  //����һ����־λ

	int* array_c;  //array_c�Ķ������ʼ��
	array_c=(int*)malloc(sizeof(int)* (a_le + b_le)); //����ĳ��Ȳ����ܱ�a_le + b_le��������a_le + b_le���ã����Ҳ��˷��ڴ�

	//�󲢼�����һ������arr_a��ȫ���ŵ�array_c��
	for (int i = 0; i < a_le; i++)//��������arr_a
	{
		array_c[i] = arr_a[i];   
	}

	// �󲢼����ڶ�������array_c��û�У�����arr_b���е�Ԫ�طŵ�array_c��
	for (int i = 0; i < b_le; i++) //����arr_b
	{
		flag = 1;
		for (int j = 0; j < a_le; j++)  //����array_c
		{

			if (arr_b[i] == array_c[j])
			{
				flag = 0;//��־λ�����þ��ǣ�˵��arr_b�е�Ԫ�أ����Ѿ���array_c���ˣ��������ñ�ǣ�ͨ��if��䣬���䲻��ӵ�array_c��
			}

		}

		if (flag==1)  //��־λ�����ñ��ֳ�����
		{
			array_c[count] = arr_b[i];   //���Ѿ���array_a��ȫ������array_c�к���һ��λ�þ���array_a�ĳ���
			count++;
		}
	}

	//ð������  �������󽻼���һ����
	int a;
	int b;
	int temp;
	for (b = 0; b < count - 1; b++)
	{
		for (a = 0; a < count - 1 - b; a++)
		{
			if (array_c[a] > array_c[a + 1])
			{
				temp = array_c[a];
				array_c[a] = array_c[a + 1];
				array_c[a + 1] = temp;
			}
		}
	}


	//���
	cout << "uni array_a and array_b is:";
	for (int i = 0; i < count; i++)
	{
		cout << array_c[i] << " ";
	}
	cout << endl;
}


#endif