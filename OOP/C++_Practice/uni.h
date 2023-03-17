#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _UNI_H_
#define _UNI_H_

void uni(int* arr_a, int* arr_b, int a_le, int b_le)
{
	int count = a_le;//我们先把数组arr_a中的元素全部放到array_c中，那么数组arr_b中的元素再往数组array_c后面排序的话，下标就从a_le开始，因此我们先定义这个变量——第40行

	int flag;  //设置一个标志位

	int* array_c;  //array_c的定义与初始化
	array_c=(int*)malloc(sizeof(int)* (a_le + b_le)); //数组的长度不可能比a_le + b_le还大，所以a_le + b_le够用，并且不浪费内存

	//求并集，第一步，把arr_a的全部放到array_c中
	for (int i = 0; i < a_le; i++)//遍历数组arr_a
	{
		array_c[i] = arr_a[i];   
	}

	// 求并集，第二步，把array_c中没有，但是arr_b中有的元素放到array_c中
	for (int i = 0; i < b_le; i++) //遍历arr_b
	{
		flag = 1;
		for (int j = 0; j < a_le; j++)  //遍历array_c
		{

			if (arr_b[i] == array_c[j])
			{
				flag = 0;//标志位的作用就是，说明arr_b中的元素，他已经在array_c中了，我们做好标记，通过if语句，将其不添加到array_c中
			}

		}

		if (flag==1)  //标志位的作用表现出来了
		{
			array_c[count] = arr_b[i];   //往已经把array_a的全部插入array_c中后，下一个位置就是array_a的长度
			count++;
		}
	}

	//冒泡排序  作用与求交集的一个样
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


	//输出
	cout << "uni array_a and array_b is:";
	for (int i = 0; i < count; i++)
	{
		cout << array_c[i] << " ";
	}
	cout << endl;
}


#endif