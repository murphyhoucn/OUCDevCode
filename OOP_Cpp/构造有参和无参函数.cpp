#include <iostream>
using namespace std;

class clock
{
public:
	clock(int newh, int newm, int news);   //�вεĹ��캯��
	clock();   //�޲εĹ��캯��

	void settime(int newh, int newm, int news);
private:
	int h, m, s;
};

clock::clock(int newh, int newm, int news)  //�вι��캯����ʵ��
{
	h = newh;
	m = newm;
	s = news;
}
clock::clock()  //�޲ι��캯����ʵ��
{
	h = 0;
	m = 0;
	s = 0;
}


void clock::settime(int newh,int newm,int news)
{
	h = newh;
	m = newm;
	s = news;
	cout << h << ":" << m << ":" << s << endl;
}


int main()
{
	clock c1(0,0,0);  //�����вι��캯��
	clock c2;    //�����޲ι��캯��

	c1.settime(1, 2, 3);

	c2.settime(1, 2, 3);

	return 0;
}