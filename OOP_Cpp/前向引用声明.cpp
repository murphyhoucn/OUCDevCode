#include <iostream>
using namespace std;


class B;  //ǰ����������

class A
{
public:
	void f(B b);
};

class B
{
public:
	void g(A a);
};

class D;
class C
{
	D d;     //������D�Ķ����в�����
};
class D
{
	D c;
};

int main()
{

}

