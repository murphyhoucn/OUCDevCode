#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef _DIFF_H_
#define _DIFF_H_

void diff(int* arr_a, int* arr_b, int a_le, int b_le)
{

	int i;
	int j;

	//定义并初始化三个新的数组
	int* array_c;
	array_c=(int*)malloc(sizeof(int) * a_le);//先把arr_a中的元素全部放入，这个是一个中间的过渡数组


	int* array_d;
	array_d = (int*)malloc(sizeof(int) * a_le);//用与存放arr_a与arr_b的交集，在求差集的时候有用


	int* array_e;
	array_e = (int*)malloc(sizeof(int) * a_le); //最终的结果所保存的数组



	//遍历arr_a，把arr_a中的全部元素先放到array_c中
	for (int i = 0; i < a_le; i++)
	{
		array_c[i] = arr_a[i];
	}


	//先找到arr_a和arr_b的交集，放到array_d中去
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

	//测试用的代码
	//cout << "test:" << endl;
	//for (i = 0; i < xx; i++)
	//{
	//	cout << array_d[i] << " ";
	//}
	//cout << endl;



	int x = 0;
	for ( i= 0; i < a_le; i++) //遍历d (交集)
	{
		int flag = 0;//定义一个标志位
		for (j= 0; j < xx; j++) //遍历c（arr_a）
		{
			if (array_d[j] == array_c[i])//交集array_d和array_d中都有的元素，我们在求交集的时候不要这些元素，因此我们做一个标记flag = 1
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)  //flag = 0：那么不符合我们之前的要求，需要将其加入到最终的结果数组array_e中
		{
			//cout << "test:" << array_c[i] << endl;
			array_e[x++] = array_c[i];
		}
	}

	//测试代码
	//cout << "test:" << endl;
	//cout << x << endl;

	//for (i = 0; i < x; i++)
	//{
	//	cout << array_e[i] << " ";
	//}
	//cout << endl;

	//冒泡排序   升序
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