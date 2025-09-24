#include <iostream>
using namespace std;

class c 
{
private:
	int x, y;
public:
	c(int x_, int y_) { x = x_, y = y_; }
	c(const c& input_c) { x = 2, y = 2; }

	void print() { cout << x << endl << y << endl; }
};

int main()
{
	c a(1, 1);
	c b(a);
	a.print();
	b.print();

	return 0;
}