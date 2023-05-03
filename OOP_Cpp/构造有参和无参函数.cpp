#include <iostream>
using namespace std;

class clock
{
public:
	clock(int newh, int newm, int news);   //有参的构造函数
	clock();   //无参的构造函数

	void settime(int newh, int newm, int news);
private:
	int h, m, s;
};

clock::clock(int newh, int newm, int news)  //有参构造函数的实现
{
	h = newh;
	m = newm;
	s = news;
}
clock::clock()  //无参构造函数的实现
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
	clock c1(0,0,0);  //调用有参构造函数
	clock c2;    //调用无参构造函数

	c1.settime(1, 2, 3);

	c2.settime(1, 2, 3);

	return 0;
}