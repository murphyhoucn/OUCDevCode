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
	using base1::var;    //ʹ��using�ؼ���
	using base1::fun;   //ע�⣬û�в�����û�У���
};   //�������಻�����µĳ�Աʱ

int main()
{
	derived d;
	derived* p = &d;

	d.var = 0;    //  ����class derived �е����������ʵ�ʱbase1�еĳ�Ա
	d.fun();    //



	d.base1::var = 1;  
	d.base1::fun();

	p->base2::var = 2;
	p->base2::fun();


	return 0;
}