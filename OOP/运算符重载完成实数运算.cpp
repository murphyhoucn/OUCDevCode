#include <iostream>
using namespace std;

class complex
{
public:
	complex(double r = 0.0, double i = 0.0)
	{
		real = r;
		imaginary = i;
	}

	double real;
	double imaginary;

};


complex operator + (  complex & a,  complex & b)
{
	return complex(a.real + b.real, a.imaginary + b.imaginary);

}

complex operator - (complex & a, complex & b)
{
	return complex(a.real - b.real, a.imaginary - b.imaginary);
}




int main()
{
	complex a(1, 2), b(2, 3), c;
	c = a + b;

	cout << c.real << endl << c.imaginary << endl;

	return 0;
}