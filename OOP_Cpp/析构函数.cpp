#include <iostream>
using namespace std;

class c
{
private:
	int x, y;
	char* p;
public:
	c(int x_, int y_) { x = x_, y = y_; }
	c(){}
	c(int input) { x = 0, y = input, p = new char[10]; }

	void print() { cout << "bey" << endl; delete[] p; }
};

int main()
{
	c a(3);
	a.print();
	
	return 0;
}
