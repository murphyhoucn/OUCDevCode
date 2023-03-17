#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	cout << i++ << endl;   //1
	cout << i << endl;    //2
	cout << endl;

	int j = 1;
	cout << ++j << endl;  //2
	cout << j << endl;   //2
	cout << endl;

	int a = 5;
	int b = 6;
	int c = a < b;
	int d = a > b;
	cout << c << endl;
	cout << d << endl;
	cout << endl;

	//Ìõ¼şÔËËã·û
	int m = 5;
	int n = 6;
	cout << (m > n ? "fail" : "true") << endl;
	cout << (m > n ? m : n) << endl;
	int q = (m > n ? m : n);
	cout << q << endl;
	cout << endl;

	int x=sizeof(long);
	cout << x << endl;

	return 0;

}