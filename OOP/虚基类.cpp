#include <iostream>
using namespace std;

class base0
{
public:
	int var0;
	void fun0() { cout << "base0 " <<var0<< endl; }
};

class base1:virtual public base0
{
public:
	int var1;
	//void fun() { cout << "base2" << endl; }
};

class base2 :virtual public base0
{
	int var2;
};
class derived :public base1, public base2
{
public :
	int var;
	void fun() { cout << "derived " << var << endl; }
};   

int main()
{
	derived d;
	
	d.var0 = 1;//直接访问虚基类的成员数据
	d.fun0();  //直接访问虚基类的成员函数

	d.var = 2;//访问派生类derived
	d.fun();
	return 0;
}