#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int t;
	//a = 6;   //��Ϊa��x�����ã����ԣ���a�����޸�ʱ��x��ֵҲ��仯
	t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 5, y = 10;
	cout << x << "  " << y << endl;
	swap(x, y);
	cout << x << "  " << y << endl;

	return 0;
	
}