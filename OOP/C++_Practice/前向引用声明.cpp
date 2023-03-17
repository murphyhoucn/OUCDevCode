#include <iostream>
using namespace std;


class B;  //前向引用声明

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
	D d;     //错误：类D的定义尚不完善
};
class D
{
	D c;
};

int main()
{

}

