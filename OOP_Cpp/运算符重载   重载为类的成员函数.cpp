#include <iostream>
using namespace std;

class complex
{
public:
	//构造函数
	complex(double r = 0.0, double i = 0.0) : real(r), image(i) {}


	complex operator +(const complex& c2) const;//函数头
	complex operator -(const complex& c2) const;
	void display()const;


private:
	double real;
	double image;
};

complex complex::operator+(const complex& c2) const
{
	return complex(real + c2.real, image + c2.image);
}

complex complex::operator -(const complex& c2) const
{
	return complex(real - c2.real, image - c2.image);
}

void complex::display() const
{
	cout <<  "("   << real   << ","  <<image  <<")"   << endl;
}

int main()
{
	complex c1(4, 5), c2(2, 10), c3;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	c3 = c1 - c2;
	cout << "c3=c1-c2="; c3.display();
	c3= c1 + c2;
	cout << "c3=c1+c2="; c3.display();
	return 0;
}