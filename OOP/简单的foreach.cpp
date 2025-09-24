#include <iostream>
#include <string>
using namespace std;

// 在此处补充你的代码
template<class T1, class T2>
void MyForeach(T1* a, T1* b, void f(T2 c))
{
	for (T1* p = a; p < b; p++)
	{
		f(*p);
	}
}

void Print(string s)
{
	cout << s;
}
void Inc(int & n)
{
	++n;
}
string array1[100];
int a[100];
int main() {
	int m, n;
	while (cin >> m >> n) {
		for (int i = 0; i < m; ++i)
			cin >> array1[i];
		for (int j = 0; j < n; ++j)
			cin >> a[j];
		MyForeach(array1, array1 + m, Print);
		cout << endl;
		MyForeach(a, a + n, Inc);
		for (int i = 0; i < n; ++i)
			cout << a[i] << ",";
		cout << endl;
	}
	return 0;
}
