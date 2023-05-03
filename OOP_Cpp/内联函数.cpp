#include <iostream>
using namespace std;

inline double calarea(double radius)   //ÄÚÁªº¯Êı
//double calarea(double radius)
{
	return 3.14 * radius * radius;
}


int main()
{
	double r(3.0);
	//double r = 3.0;

	double area = calarea(r);
	//cout << area << endl;
	cout << calarea(r) << endl;
	return 0;
}