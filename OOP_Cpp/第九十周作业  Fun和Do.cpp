#include <iostream> 
using namespace std;
class A {
private:
	int nVal;
public:
	void Fun() //A：：fun
	{
		cout << "A::Fun" << endl;
	};
	void Do()  //a::fun
	{
		cout << "A::Do" << endl;
	}
};
class B :public A {
public:
	virtual void Do()   //a::do
	{
		cout << "B::Do" << endl;
	}
};
class C :public B {
public:
	void Do()  //c::do
	{
		cout << "C::Do" << endl;
	}
	void Fun()  //a::fun
	{
		cout << "C::Fun" << endl;
	}
};
void Call(
	// 在此处补充你的代码
	B&p

) {
	p.Fun(); p.Do();
}
int main() {
	C c;
	Call(c);
	return 0;
}
