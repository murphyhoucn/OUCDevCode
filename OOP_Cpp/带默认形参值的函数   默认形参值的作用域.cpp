#include<iostream>
using namespace std;

int add(int x = 3, int y = 4);
int fun();

int main()
{
	int add(int x = 1, int y = 2);
	add();   //�ֲ�Ĭ��1+2
	cout << add() << endl;

	cout << fun() << endl;

	return 0;
}

int fun()
{
	int a = add();  //ȫ��Ĭ�� 3+4
	return a;
}

int add(int x, int y)
{
	return x + y;
}