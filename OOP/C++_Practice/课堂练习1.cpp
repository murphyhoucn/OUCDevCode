#include <iostream>
using namespace std;

class demo
{
private:
	int id;
public:
	demo(int i);
	{
		id = i;
		cout << "id=" << id << "   constructed " << endl;
		~demo() { cout << "id=" << id << "delete" << endl; }

	}
};

demo d1(1);
void fun()
{
	static demo d2(2);
	demo d3(3);
	cout << "fun" << endl;
}

int main()
{
	demo d4(4);
	d4 = 6;
	cout << "main" << endl;
	{demo d5(5); }
	fun();
	cout << "main end" << endl;

	return 0;
}