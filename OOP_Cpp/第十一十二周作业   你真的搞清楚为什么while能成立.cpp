#include <iostream>
using namespace std;
class MyCin
{

	// 在此处补充你的代码
private:
	bool a;   //bool 型  a成员
public:
	MyCin() :a(1) {}; //构造函数

	MyCin & operator >> (int & n)  //重载>>
	{
		cin >> n;

		if (n == -1)
		{
			a = 0;
		}

		return *this;
	}


	operator bool()  //类型转换函数
	{
		return a; 
	}

};
int main()
{
	MyCin m;
	int n1, n2;
	while (m >> n1 >> n2)
		cout << n1 << " " << n2 << endl;
	return 0;
}
