#include <iostream>
using namespace std;

class c
{
private:
	int x;
	int y;
public:
	void init(int x_ = 1, int y_ = 1) { x = x_, y = y_; }

	void print() { cout << x << endl << y << endl; }
};


void add(int x = 1, int y = 2)
{
	cout << x + y << endl;
}

int main()

{
	c a;
	a.init();
	a.print();
	add();
	add(5, 5);
	add(5);
	//add(,5);


	return 0;

	
}