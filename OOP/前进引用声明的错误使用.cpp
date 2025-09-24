#include <iostream>
using namespace std;

class D;  //前进引用声明
class C
{
public:
	void f() { x.h(); }  //错误：D类的对象x在声明之前被使用
private:
	D& x;  //正确，经过前向引用声明，可以声明D类的对象
};
class D
{
public:
	void j();
private:
	C& y;
};

int main()
{
	return 0;
}