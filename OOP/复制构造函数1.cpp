#include <iostream>
using namespace std;

class base1
{
public:
	base1(int i) { cout << "constructing base1    " << i << endl; }
};

class base2
{
public:
	base2(int j) { cout << "constructing base2    " << j << endl; }
};

class base3
{
public:
	base3() { cout << "construcing base3     *" << endl; }
};

//class derived :public base2, public base1, public base3   //继承的顺序    2，1，3
class derived :public base1, public base2, public base3   //继承的顺序 1，2，3
{
public:
	//derived(int a, int b,int c,int d):base1(a),member2(d),member1(c),base2(b)  //顺序无影响
	derived(int a, int b, int c, int d) : base1(a), base2(b), member1(c),member2(d)
	{} //派生类构造函数
private:
	base1 member1;
	base2 member2;
	base3 member3;
};
int main()
{
	derived(1, 2, 3, 4);
	return 0;
}
