#include <iostream>
using namespace std;

int main()
{
	int n, m;
	m = 5;
	const int* p = &n;

	//*p = 5;// 错误，不可通过常量指针修改其指向的内容

	n = 4;
	p = &m;
	cout << *p << endl;

	return 0;
}