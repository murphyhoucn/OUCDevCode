#include <iostream> 
using namespace std;
class A
{
public:
	A() { }
	// �ڴ˴�������Ĵ���
	virtual ~A() { cout << "destructor A" << endl; }
	// ~A() { cout << "destructor A" << endl; }

};

class B :public A {     //B��A�Ĺ���������
public:
	~B() { cout << "destructor B" << endl; }
};
int main()
{
	    
	A * pa;
	pa = new B;
	delete pa;
	return 0;
}

//��������������mianִ�й���
		//���A������������֧�ֶ�̬����ֻ�����destructor A
		//����֧�ֶ�̬����Ҫvirtual��delete paʱ��ִ��paʵ��ָ�����B����������
		//Ȼ���ɼ̳й�ϵ������ִ��ֱ�ӻ���A����������