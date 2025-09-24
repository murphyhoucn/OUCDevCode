#include <iostream>.
using namespace std;

int main()
{
	student* jack = new student;
	jack->age = 18;
	strcpy_s(jack->name, "jack");
	cout << jack->name << "'s age is:" << jack->age << endl;

	return 0;
}


class student
{
public:
	char name[10];
	char id[100];
	int age;

	void test()
	{
		cout << "test" << endl;
	}

	void sport()
	{
		cout << "sport" << endl;
	}

	void gotoclass()
	{
		cout << "gotioclass " << endl;
	}
};