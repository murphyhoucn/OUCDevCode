#include <iostream>
using namespace std;
int main()

{
	int n = 100;
	const int& r = n;
	//r = 200;
	n = 300;

	return 0;
}