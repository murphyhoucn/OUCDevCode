#include <iostream>
#include <cmath>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect;
	rect.initRectangle(2, 3, 20, 10);
	rect.move(3, 2);
	cout << "the data of rect(x,y,w,h):" << endl;
	cout << rect.getX() << ",";
	cout << rect.getY() << ",";
	cout << rect.getW() << ",";
	cout << rect.getH() << endl;


	return 0;
}