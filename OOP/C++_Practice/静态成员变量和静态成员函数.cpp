#include <iostream>
using namespace std;

class c
{
private:
	int x, y;
public:
	c(int x_, int y_) { x = x_, y = y_; total_points++; }
	static int total_points;
	static void ste_points(int input) { total_points = input; }
	static void print() { cout << total_points << endl; }
};

int c::total_points = 0;

void mian()
{
	c q(10, 20);
	c d(2, 3);
	c e(2, 3);

	e.print();
}