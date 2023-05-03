#include <iostream>
using namespace std;
struct complex
{
	double real;
	double imaginary;
};

int add(int m, int n);
double add(double x, double y);
complex add(complex c1, complex c2);

int main()
{
	int m, n;
	cout << "enter:";
	cin >> m>> n;
	cout << add(m, n) << endl;
	
	double x, y;
	cout << "enter:";
	cin >> x >> y;
	cout << add(x, y) << endl;

	complex c1, c2, c3;
	cout << "enter 1:";
	cin >> c1.real >> c1.imaginary;
	cout << "enter 2:";
	cin >> c2.real >> c2.imaginary;
	c3 = add(c1, c2);
	cout <<c3.real<<"+"<<c3.imaginary <<"i"<< endl;
}

int add(int m, int n) { return m + n; }

double add(double x, double y) { return x + y; }

complex add(complex c1, complex c2)
{
	complex c;
	c.real = c1.real + c2.real;
	c.imaginary = c1.imaginary + c2.imaginary;

	return c;
}