#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;
int charConvert(char c)
{
	if (c >= 'a' && c <= 'f') return c - 87;
	else if (c >= '0' && c <= '9')return c - 48;
}
int hexSum(const string& a, const string& b)
{
	int sum = 0;
	for (int i = a.size() - 1; i >= 0; i--) sum += pow(16, a.size() - 1 - i)*charConvert(a.at(i));
	for (int i = b.size() - 1; i >= 0; i--) sum += pow(16, b.size() - 1 - i)*charConvert(b.at(i));
	return sum;
}
int main()
{
	string a, b;
	cin >> a >> b;
	cout << hex << hexSum(a, b);
	return 0;
}
