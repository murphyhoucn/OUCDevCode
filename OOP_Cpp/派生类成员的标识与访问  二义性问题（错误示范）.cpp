#include <iostream>
using namespace std;

class base1
{
public:
	int var;
	void fun() { cout << "base1" << endl; }
};

class base2
{
public:
	int var;
	void fun() { cout << "base2" << endl; }
};

class derived:public base1,public base2{};   //�������಻�����µĳ�Աʱ

int main()
{
	derived d;
	derived* p = & d;

	d.var = 1;    //���� ����������
	d.fun();    //���� ����������



	d.base1::var = 1;
	d.base1::fun();

	p->base2::var = 2;
	p->base2::fun();


	return 0;



}