#include <iostream>
using namespace std;

int main()
{
	int n, m;
	m = 5;
	const int* p = &n;

	//*p = 5;// ���󣬲���ͨ������ָ���޸���ָ�������

	n = 4;
	p = &m;
	cout << *p << endl;

	return 0;
}