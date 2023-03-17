#include <iostream>
using namespace std;

const float PI = 3.14;
const float F = 35;
const float C = 20;

class circle
{
public:
	circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

circle::circle(float r)
{
	radius = r;
}

float circle::circumference()
{
	return 2 * PI * radius;
}

float circle::area()
{
	return PI * radius * radius;
}

int main()
{
	float radius;
	cout << "enter the radius of the pool:" << endl;
	cin >> radius;
	circle pool(radius);
	circle poolrim(radius + 3);

	float fencecost = poolrim.circumference * F;
	cout << "Fencing cost is " << fencecost << endl;

	float concrecost = (poolrim.area() - pool.area()) * C;
	cout << "concrete cost is " << concrecost << endl;

	return 0;
}