#include <iostream>
using namespace std;

class c
{
private:
	int x, y;
public:
	c(int x_, int y_) { x = x_, y = y_; }
	c() { cout << "test" << endl; }

	void print(){ cout <<x << endl << y << endl; }
};

int main()
{
	c a;
	c b(1, 2);
	c* d = new c(3, 3);
	c* e = new c();

	b.print();
	d->print();
	//e->print();

	return 0;
}

