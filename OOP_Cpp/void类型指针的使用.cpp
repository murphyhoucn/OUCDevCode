#include <iostream>
using namespace std;

int main()
{
	// void object;   错误，不能声明void类型的变量

	void* pv;
	int i = 5;
	pv = &i;
	int* point = static_cast<int*>(pv);
	cout << "*point =" << *point  << endl;

	return 0;

}