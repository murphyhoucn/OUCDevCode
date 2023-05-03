#include<iostream>
#include<string>
using namespace std;


class stuinf
{
private:
	char name[100];
	int age;
	char id[100];
	char c = ',';
	int year1, year2, year3,year4;
	int ave;

public:
	void CIN() {
		cin.getline(name, 100, ',');
		cin >> age >> c;
		cin.getline(id, 100, ',');
		cin >> year1 >> c >> year2 >> c >> year3 >> c >> year4;
	}

	void COUT() {
		ave = (year1 + year2 + year3 + year4) / 4;
		cout << name << "," << age << "," << id << "," << ave ;
	}
};


int main()
{
	stuinf S;
	S.CIN();
	S.COUT();

	return 0;
}