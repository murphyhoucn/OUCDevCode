#include <iostream>
#include <string>
using namespace std;

int main()

{
	for (int i = 0; i < 2; i++)
	{
		string city;
		string state;

		getline(cin, city, ',');//����','λΪֹ��ȫ����city��
		getline(cin,state);

		cout << "city:" << city << "   state:" << state << endl;

	}

	return 0;
}