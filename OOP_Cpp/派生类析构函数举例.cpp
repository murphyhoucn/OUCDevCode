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


������ֱ��    ���� 

����������Ա��     ���ݳ�Ա

����������Ա����������   ������Ա



����ࣺ

class ����������virtual �̳з�ʽ  ������