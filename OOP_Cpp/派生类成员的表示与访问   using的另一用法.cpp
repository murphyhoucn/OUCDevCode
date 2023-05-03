#include <iostream>
using namespace std;

class base1
{
public:
	int var;
	void fun() { cout << "base1 " <<var<< endl; }
};

class derived :public base1 
{
public:
	using base1::fun;

	void fun(int i)
	{
		cout << i << endl;
	}
};   //当派生类不定义新的成员时

int main()
{
	derived d;

	d.var = 1;//调用base1中的成员
	d.fun();

	d.fun(5);//调用derived的fun(int i)函数



	//d.base1::var = 1;
	//d.base1::fun();


	return 0;



}