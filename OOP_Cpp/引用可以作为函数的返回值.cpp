#include <iostream>
using namespace std;
int n = 4;
int &setvalue()
{
	return n;
}
int main()
{
	setvalue()=40;  //���40
	//setvalue();   //���4
	cout << n << endl;
	return 0;
}