#include <iostream>
using namespace std;

class D;  //ǰ����������
class C
{
public:
	void f() { x.h(); }  //����D��Ķ���x������֮ǰ��ʹ��
private:
	D& x;  //��ȷ������ǰ��������������������D��Ķ���
};
class D
{
public:
	void j();
private:
	C& y;
};

int main()
{
	return 0;
}