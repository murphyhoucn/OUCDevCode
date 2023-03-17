#include <iostream>
using namespace std;

class base1
{
public:
	base1(int i)
	{
		cout << "constructor called" << i<<endl;
	}

	~base1() { cout << "disconstructor called " << endl; }



};

class base2:public base1
{
public:
	base2(int i)
	{
		cout << "constructor called" << i << endl;
	}


};


作用域分辨符    ：： 

类名：：成员名     数据成员

类名：：成员名（参数表）   函数成员



虚基类：

class 派生类名：virtual 继承方式  基类名