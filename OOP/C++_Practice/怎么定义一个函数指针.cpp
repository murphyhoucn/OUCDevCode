#include <iostream>
using namespace std;


void pfmax(int a, int b)
{
	if (a > b) { cout << a << endl; }
	else { cout << b << endl; }
}
int main()
{
	void (*p)(int, int);
	//�������ͣ�* ����ָ���������βα�

	int x = 4, y = 5;
	p = pfmax;  //����ָ����ʹ��ǰҪ���и�ֵ��ʹָ��ָ��һ���Ѿ����ڵĺ����������ʼ��ַ
	//����ָ����=������

	p(x, y);

	return 0;
}