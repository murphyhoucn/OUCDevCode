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
	
	d.var0 = 1;//ֱ�ӷ��������ĳ�Ա����
	d.fun0();  //ֱ�ӷ��������ĳ�Ա����

	d.var = 2;//����������derived
	d.fun();
	return 0;
}