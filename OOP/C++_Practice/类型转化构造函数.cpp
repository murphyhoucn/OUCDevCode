#include <iostream>
using namespace std;

class c
{
private:
	int x, y;
public:
	c(int x_, int y_) { x = x_, y = y_; }
	//c(){}
	c(const c& input_c) { x = 2, y = 2; }
	c(int input) { x = 0, y = input; print(); }
	void print() { cout << x << endl << y << endl; }
};

int main()
{
	c a(3);
	c b = 5;
	return 0;
}