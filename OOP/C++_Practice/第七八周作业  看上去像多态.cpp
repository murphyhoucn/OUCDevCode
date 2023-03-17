#include <iostream>
using namespace std;
class B {
private:
	int nBVal;
public:
	void Print()
	{
		cout << "nBVal=" << nBVal << endl;
	}
	void Fun()
	{
		cout << "B::Fun" << endl;
	}
	B(int n) { nBVal = n; }
};
// 在此处补充你的代码

class D :public B     //公有继承
{
private:
	int nDVal;
public:

	D(int n) :B(3 * n)  
	{
		nDVal = n;
	}

	void Fun()
	{
		cout << "D::Fun" << endl;
	}

	void Print()
	{
		B::Print();
		cout << "nDVal=" << nDVal << endl;
	}
	
};

int main() {
	B * pb; 
	D * pd;

	D d(5);     //赋值n=4
	d.Fun();    //打印输出  D：：Fun

	pb = new B(2); 
	pd = new D(8);

	pb->Fun();   //打印输出  B：：Fun
	pd->Fun();   //打印输出  D：：Fun

	pb->Print();  //输出  nBVal=2
	pd->Print();  //输出  nBVal=3*8=24;
	               //输出nDVal=8      
	              
	pb = &d;      //注释之后nbval的值为2  ，D类中n=4，给B的形参n为12

	pb->Fun();  //输出 B：：FUN
	pb->Print();  //输出nbval=12;
	return 0;
}