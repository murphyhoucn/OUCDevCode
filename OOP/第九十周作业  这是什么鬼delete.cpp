#include <iostream> 
using namespace std;
class A
{
public:
	A() { }
	// 在此处补充你的代码
	virtual ~A() { cout << "destructor A" << endl; }
	// ~A() { cout << "destructor A" << endl; }

};

class B :public A {     //B是A的公有派生类
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

//根据输出结果分析mian执行过程
		//如果A的析构函数不支持多态，则只会输出destructor A
		//故其支持多态，需要virtual，delete pa时，执行pa实际指向的类B的析构函数
		//然后由继承关系，向上执行直接基类A的析构函数