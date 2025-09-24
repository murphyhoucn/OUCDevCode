#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;

	//课本 第十一章
	cout.setf(ios_base::fixed);    //cout.setf()  输出格式设置函数
	cout.precision(5);
	cout << a << endl;


	cout.unsetf(ios_base::fixed);// 取消已设定的格式定义

	cout.setf(ios_base::scientific);
	cout.precision(7);
	cout << a << endl;

	return 0;
}