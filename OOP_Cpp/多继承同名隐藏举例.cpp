#include <iostream>
using namespace std;

class base0
{
public:
	int var0;
	void fun0() { cout << "base0 " <<var0 << endl; }
};

class base1:public base0
{
public:
	int va1;
};
class base2 :public base0
{
public:
	int var2;
};

class derived :public base1, public base2
{
	int var;
	void fun() { cout <<"derived" << var << endl; }
};

int main()
{
	derived d;

	d.base1::var0 = 2;
	d.base1::fun0();

	d.base2::var0 = 3;
	d.base2::fun0();

	return 0;
}