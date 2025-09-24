#include <iostream>
using namespace std;
int n = 4;
int &setvalue()
{
	return n;
}
int main()
{
	setvalue()=40;  //Êä³ö40
	//setvalue();   //Êä³ö4
	cout << n << endl;
	return 0;
}