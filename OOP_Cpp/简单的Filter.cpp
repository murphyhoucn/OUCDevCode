#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
template <class T1, class T2>  //函数模板

T1 Filter(T1 a, T1  b, T1 c, T2 d)
{
	while (a != b){if (d(*a)){*c++ = *a++;} else ++a;}
	return c;
}

bool LargerThan2(int n){return n > 2;}
bool LongerThan3(string s){return s.length() > 3;}

string as1[5] = { "Tom","Mike","Jack","Ted","Lucy" };
string as2[5];
int  a1[5] = { 1,2,3,4,5 };
int a2[5];


int main() {
	string * p = Filter(as1, as1 + 5, as2, LongerThan3);
	//Filter 需返回string *类型，故T不能为T *；

	for (int i = 0; i < p - as2; ++i)
		cout << as2[i];
	cout << endl;

	int * p2 = Filter(a1, a1 + 5, a2, LargerThan2);
	for (int i = 0; i < p2 - a2; ++i)
		cout << a2[i] << ",";

	//cout << endl;
	//int j = 0;
	//for ( j = 0;j < 6;j++)
	//{
	//	cout << as2[j];
	//}

	//cout << endl;
	//int k = 0;
	//for (k = 0; k < 6; k++)
	//{
	//	cout << a[j] << endl;
	//}
	return 0;
}
