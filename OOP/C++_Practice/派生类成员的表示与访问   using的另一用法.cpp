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
};   //�������಻�����µĳ�Աʱ

int main()
{
	derived d;

	d.var = 1;//����base1�еĳ�Ա
	d.fun();

	d.fun(5);//����derived��fun(int i)����



	//d.base1::var = 1;
	//d.base1::fun();


	return 0;



}