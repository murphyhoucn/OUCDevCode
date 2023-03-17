#include <iostream>
#include <stdlib.h>


#include "inter.h"
#include "uni.h"
#include "diff.h"

using namespace std;



//����������
int main(void)   
{
	//�����������壬�ں�����ʹ��֮ǰҪ�ȶԺ��������������ſ��Ա�֤����������ʹ��
	void inter(int* arr_a, int* arr_b, int a_le, int b_le); 
	void uni(int* arr_a, int* arr_b, int a_le, int b_le);
	void diff(int* arr_a, int* arr_b, int a_le, int b_le);
	int judgement(int* array, int len);
	//�����������飬��Ϊ����
	int* array_a, * array_b;  


	//�����������ͱ�������ʾ��������ĳ���
	int len_a, len_b;


	//��������ĳ���
	cout << "please input the len of array_a:";  
	cin >> len_a;
	cout << "please input the len of array_b:";
	cin >> len_b;
	cout << endl;


	//��������г�ʼ��
	array_a = (int*)malloc(sizeof(int) * len_a);
	array_b = (int*)malloc(sizeof(int) * len_b);


	//������Ԫ�ؽ�������
	judgement_a:cout << "please enter the elements of array_a:";
	for (int i = 0; i < len_a; i++)
	{
		cin >> array_a[i];
	}
	if (judgement(array_a, len_a) == 1)
	{ 
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //��ɫת������
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
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //��ɫת������
		cout << "\033[31mthe inputed array has repeated elements!\033[0m";
		cout << "\033[31mplease input agagin!\033[0m" << endl;
		goto judgement_b; 
	}
	cout << endl;
	cout << endl;


	//�����õģ�Ϊ�˼���֮ǰ�Ĵ����Ƿ��������У��������ʵ�дһ�²��Դ��룬�����ڼ��ֶ����������Ƿ�����
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



	//getchar�����������Ŀ���ǣ��ų�֮ǰcin������ֵ���µĻس���Ӱ��
	//����һ��ˢ�»�������֪ʶ�㣬����������������֮�䲻���������׵��º������������ݶ�ȡ���ǣ�ǰ����������֮�������µġ��س���
	getchar();


	//����choice �ñ�����ֵ����������ѡ����һ�ּ��ϵ�����
	int choice;
	again:printf("please input your choice (1:inter;2:uni;3:diff;):");
	cin >> choice;


	//switch-case��䣬����choice��ֵѡ������ʹ����һ�ּ�������
	switch (choice)
	{
	case 1:
		inter(array_a, array_b, len_a, len_b);  //��������
		break;
	case 2:
		uni(array_a, array_b, len_a, len_b);
		break;
	case 3:
		diff(array_a, array_b, len_a, len_b);
		break;
	default://��������ֵ���������ǵ�ѡ��Χ�򱨴�
		cout << endl;
		cout << "\033[31;4m******WARNING******\033[0m\n" << endl;  //��ɫת������
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