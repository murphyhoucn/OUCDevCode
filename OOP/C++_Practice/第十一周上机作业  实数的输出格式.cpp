#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;

	//�α� ��ʮһ��
	cout.setf(ios_base::fixed);    //cout.setf()  �����ʽ���ú���
	cout.precision(5);
	cout << a << endl;


	cout.unsetf(ios_base::fixed);// ȡ�����趨�ĸ�ʽ����

	cout.setf(ios_base::scientific);
	cout.precision(7);
	cout << a << endl;

	return 0;
}