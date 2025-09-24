#include <iostream>
#include <stdlib.h>


#include "inter.h"
#include "uni.h"
#include "diff.h"

using namespace std;



//主函数部分
int main(void)   
{
	//声明函数定义，在函数被使用之前要先对函数进行声明，才可以保证函数的正常使用
	void inter(int* arr_a, int* arr_b, int a_le, int b_le); 
	void uni(int* arr_a, int* arr_b, int a_le, int b_le);
	void diff(int* arr_a, int* arr_b, int a_le, int b_le);
	int judgement(int* array, int len);
	//定义两个数组，作为集合
	int* array_a, * array_b;  


	//定义两个整型变量，表示两个数组的长度
	int len_a, len_b;


	//输入数组的长度
	cout << "please input the len of array_a:";  
	cin >> len_a;
	cout << "please input the len of array_b:";
	cin >> len_b;
	cout << endl;


	//对数组进行初始化
	array_a = (int*)malloc(sizeof(int) * len_a);
	array_b = (int*)malloc(sizeof(int) * len_b);


	//对数组元素进行输入
	judgement_a:cout << "please enter the elements of array_a:";
	for (int i = 0; i < len_a; i++)
	{
		cin >> array_a[i];
	}
	if (judgement(array_a, len_a) == 1)
	{ 
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //颜色转换方法
		cout << "\033[31mthe inputed array has repeated elements!\033[0m";
		cout << "\033[31mplease input agagin!\033[0m" << endl;
		goto judgement_a; 
	}
	cout << endl;


	judgement_b:cout << "please enter the elements of array_b:";
	for (int i = 0; i < len_b; i++)
	{
		cin >> array_b[i];
	}


	if (judgement(array_b, len_b) == 1) 
	{
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //颜色转换方法
		cout << "\033[31mthe inputed array has repeated elements!\033[0m";
		cout << "\033[31mplease input agagin!\033[0m" << endl;
		goto judgement_b; 
	}
	cout << endl;
	cout << endl;


	//测试用的，为了检验之前的代码是否正常运行，程序中适当写一下测试代码，有助于检测分段整个程序是否正常
	/*cout << "test:" << endl;
	for (int i = 0; i < len_a; i++)
	{
		cout << array_a[i];
		cout << " ";
	}
	cout << endl;

	for (int i = 0; i < len_b; i++)
	{
		cout << array_b[i];
		cout << " ";
	}
	cout << endl;*/



	//getchar放置在这里的目的是：排除之前cin输入数值后按下的回车的影响
	//这是一个刷新缓冲区的知识点，在两个连续的输入之间不做处理，容易导致后面的输入的内容读取的是：前面输入内容之后所按下的“回车”
	getchar();


	//定义choice 该变量的值决定了我们选择哪一种集合的运算
	int choice;
	again:printf("please input your choice (1:inter;2:uni;3:diff;):");
	cin >> choice;


	//switch-case语句，根据choice的值选择我们使用哪一种集合运算
	switch (choice)
	{
	case 1:
		inter(array_a, array_b, len_a, len_b);  //函数调用
		break;
	case 2:
		uni(array_a, array_b, len_a, len_b);
		break;
	case 3:
		diff(array_a, array_b, len_a, len_b);
		break;
	default://如果输入的值不属于我们的选择范围则报错
		cout << endl;
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //颜色转换方法
		cout << "\033[31mthe choice you chose is wrong!\033[0m";
		cout << "\033[31mplease input agagin!\033[0m"<<endl; 
		cout << endl;
		goto again;
	}

	return 0;
}



int judgement(int* array, int len) 
{
	for (int i = 0; i < len; i++) 
	{
		for (int j = i + 1; j < len; j++) 
		{
			if (array[i] == array[j])
			{
				return 1;
			}
		}
	}

	return 0;
}