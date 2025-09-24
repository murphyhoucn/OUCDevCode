//求交集的函数

#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _INTER_H_
#define _INTER_H_

void inter(int* arr_a, int* arr_b, int a_le, int b_le)
{

	//因为是求集合的交集，交集中元素的数量一定不会比两者中大的哪一方的数量更大，所有我们取新数组的长度为两这中大的那一方
	int len_c;
	len_c = a_le > b_le ? a_le : b_le; 


	//定义新数组并初始化
	int* array_c;
	array_c =(int*)malloc(sizeof(int) * len_c);

	int i;
	int j;
	int k = 0;

	for ( i= 0; i < a_le; i++)//遍历数组a
	{
		for ( j= 0; j < b_le; j++)//遍历数组b
		{
			if (arr_a[i] == arr_b[j])  //如果数组a和数组b中的元素相同，那么该元素就属于交集中的元素，就把他放入新建的数组中
			{
				array_c[k] = arr_a[i];
				k++;
			}
		}
	}

	//冒泡排序算法，升序排列数组
	int a;
	int b;
	int temp;
	for (b = 0; b < k - 1; b++)
	{
		for (a = 0; a < k - 1 - b; a++)
		{
			if (array_c[a] > array_c[a + 1])//冒泡排序算法，如果想要降序排列数组的话，就更改成小于号
			{
				temp = array_c[a];
				array_c[a] = array_c[a + 1];
				array_c[a + 1] = temp;
			}
		}
	}


	//输出最后的集合
	cout << "inter array_a and array_b is:";
	for (int i = 0; i < k; i++)
	{
		cout << array_c[i] << " ";
	}
	cout << endl;
}

#endif