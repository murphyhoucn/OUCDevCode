#include <iostream>
using namespace std;
class MyCin
{

	// �ڴ˴�������Ĵ���
private:
	bool a;   //bool ��  a��Ա
public:
	MyCin() :a(1) {}; //���캯��

	MyCin & operator >> (int & n)  //����>>
	{
		cin >> n;

		if (n == -1)
		{
			a = 0;
		}

		return *this;
	}


	operator bool()  //����ת������
	{
		return a; 
	}

};
int main()
{
	MyCin m;
	int n1, n2;
	while (m >> n1 >> n2)
		cout << n1 << " " << n2 << endl;
	return 0;
}
