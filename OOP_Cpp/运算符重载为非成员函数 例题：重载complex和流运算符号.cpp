#include <iostream>
using namespace std;

class complex
{
public:
	complex(double r=0.0,double i=0.0):real(r),image(i){}
	friend complex operator +(const complex& c1, const complex& c2);
	friend complex operator -(const complex& c1, const complex& c2);
	friend ostream &operator <<(ostream& out, const complex& c);

private:
	double real;
	double image;

};
complex operator +(const complex& c1, const complex& c2)
{
	return complex(c1.real + c2.real, c1.image + c2.image);
}

complex operator -(const complex& c1, const complex& c2)
{
	return complex(c1.real - c2.real, c1.image - c2.image);
 }

ostream& operator <<(ostream& out, const complex& c)
{
	cout << "(" << c.real << "," << c.image << ")" << endl;
	return out;
}

int main()
{
	complex c1(4, 5), c2(2, 10), c;
	cout << "c1=" << c1 << endl;
	cout << "c2=" << c2 << endl;
	c = c1 + c2;
	cout << "c1+c2=" << c << endl;
	c = c1 - c2;
	cout << "c1-c2=" << c << endl;

	return 0;
}