#include <iostream>
using namespace std;


int calculation(int w)    //计算1月份的13号是周几，然后返回值
{
	int neww = w + 5;

	if (neww > 7)
	{
		neww = neww % 7;
		return neww;
	}
	else
	{
		return neww;
	}
}


int main() 
{
	int W;
	cin >> W;
	int day = calculation(W);
	//cout << day << endl;
	if (day == 5) { cout << "1" << endl; }

	int MOON[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 11; i++)
	{
		day = day + MOON[i];
		int newneww = (day) % 7;

		if (newneww == 5) { cout << i+2 <<endl; }
	}
	


	return 0;
}