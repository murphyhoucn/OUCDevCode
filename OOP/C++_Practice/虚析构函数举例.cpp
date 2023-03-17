#include <iostream>
using namespace std;

class base
{
public:
	virtual ~base();
};

base::~base()
{
	cout << "distructor base" << endl;
}

class derived :public base
{
public:
	derived();

	~derived();

private:
	int* p;
};


derived::derived()
{
	p = new int(0);

}

derived::~derived()
{
	cout << "derived delete" << endl;
	delete p;
}

void fun(base* b)
{
	delete b;
}


int main()
{
	base* b = new derived();
	fun(b);

	return 0;
}



ostream& operator <<(ostream& out, const complex& c)
{

}


