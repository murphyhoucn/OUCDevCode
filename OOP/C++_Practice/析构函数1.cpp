#include <iostream>
using namespace std;

class base1
{
	base1(int i) { cout << "construcing base1  " << i << endl; }
	~base1() { cout << "destructing base1" << endl; }
};

class base2
{
	base2(int j) { cout << "construcing base2  " << j << endl; }
	~base2() { cout << "destrucing base2" << endl; }
};

class base3
{
public:
	base3() { cout << "construcing base3  *" << endl; }
	~base3() { cout << "destrucing base3" << endl; }
};

class derived :public base2, public base1, public base3
{
public:
	derived(int a,int b, int c, int d) : base1(a),member2(d),member1(c),base2(b)
	{}

private:
	base1 member1;
	base2 member2;
	base3 member3;
};


int main()
{
	derived obj(1, 2, 3, 4);
	return 0;

}