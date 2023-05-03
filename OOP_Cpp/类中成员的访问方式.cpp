#include <iostream>
using namespace std;

class clock
{
public:
	void settime(int a);
private:
	int a;
};
void clock:: settime(int a)
{
	cout << a << endl;
}

int main()
{
	clock my;
	my.settime(5);

	return 0;
}