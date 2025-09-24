#include<iostream>
using namespace std;

int add(int x = 3, int y = 4);
int fun();

int main()
{
	int add(int x = 1, int y = 2);
	add();   //局部默认1+2
	cout << add() << endl;

	cout << fun() << endl;

	return 0;
}

int fun()
{
	int a = add();  //全局默认 3+4
	return a;
}

int add(int x, int y)
{
	return x + y;
}