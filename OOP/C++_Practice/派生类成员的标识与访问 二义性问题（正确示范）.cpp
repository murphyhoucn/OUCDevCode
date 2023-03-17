#include <iostream>
using namespace std;

class base1
{
public:
	int var;
	void fun() { cout << "base1  " <<var<<endl; }
};

class base2
{
public:
	int var;
	void fun() { cout << "base2  " <<var<< endl; }
};

class derived :public base1, public base2 
{
public:
	using base1::var;    //使用using关键字
	using base1::fun;   //注意，没有参数，没有（）
};   //当派生类不定义新的成员时

int main()
{
	derived d;
	derived* p = &d;

	d.var = 0;    //  根据class derived 中的声明，访问的时base1中的成员
	d.fun();    //



	d.base1::var = 1;  
	d.base1::fun();

	p->base2::var = 2;
	p->base2::fun();


	return 0;
}