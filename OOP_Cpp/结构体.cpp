#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct student
{
	int num;
	string name;
	char sex;
	int age;

};

int main()
{
	student stu = { 97001,"lingling",'F',19 };
	cout << "num:" << stu.num << endl;
	cout << "name:" << stu.name << endl;
	cout << "sex:" << stu.sex << endl;
	cout << "age:" << stu.age << endl;

	return 0;
}