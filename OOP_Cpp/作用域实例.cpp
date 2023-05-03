#include <iostream>
using namespace std;

int i;

namespace Ns
{
	int j;
}


int main()
{
	i = 5;
	Ns::j = 6;
	{
		using namespace Ns;    //使得当前快中可以直接引用Ns命名空间的标识符
		int i;
		i = 7;
		cout << "i=" << i << endl;
		cout << "j=" << j << endl;

	}
	cout << "i=" << i << endl;

	return 0;
}