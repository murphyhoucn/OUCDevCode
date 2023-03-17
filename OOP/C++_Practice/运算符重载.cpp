#include <iostream>
using namespace std;

class test
{
public:
	test(int a)
	{
		a = t;
	}

	test operator *()
	{
		cout << endl;
		return *this;
	}
};