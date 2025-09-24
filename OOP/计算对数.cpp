#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	//int a, b;
	//long int a,b;
	double a,b;
	//long double a, b;
	cin >> a;
	cin >> b;


	cout << floor(log(b) / log(a)) << endl;
	//cout<<static_cast<int>(log(b) / log(a)) << endl;

	return 0;
}



