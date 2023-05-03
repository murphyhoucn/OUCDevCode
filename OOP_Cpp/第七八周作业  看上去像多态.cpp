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
// �ڴ˴�������Ĵ���

class D :public B     //���м̳�
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

	D d(5);     //��ֵn=4
	d.Fun();    //��ӡ���  D����Fun

	pb = new B(2); 
	pd = new D(8);

	pb->Fun();   //��ӡ���  B����Fun
	pd->Fun();   //��ӡ���  D����Fun

	pb->Print();  //���  nBVal=2
	pd->Print();  //���  nBVal=3*8=24;
	               //���nDVal=8      
	              
	pb = &d;      //ע��֮��nbval��ֵΪ2  ��D����n=4����B���β�nΪ12

	pb->Fun();  //��� B����FUN
	pb->Print();  //���nbval=12;
	return 0;
}