#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
	// �ڴ˴�������Ĵ���
private:
	char name[100];
	int age;
	char id[100];
	int year1, year2, year3, year4;
	double ave;
	char c;

public:
	void input() {
		cin.getline(name, 100, ',');
		cin >> age >> c;
		cin.getline(id, 100,',');
		cin >> year1 >> c >> year2 >> c >> year3 >> c >> year4;
	}
	void calculate() {
		ave = (year1 + year2 + year3 + year4) / 4.0;
	}

	void output() {
		cout << name << "," << age << "," << id << "," << ave;
	}
};

int main() {
	Student student;        // ������Ķ���
	student.input();        // ��������
	student.calculate();    // ����ƽ���ɼ�
	student.output();       // �������
}