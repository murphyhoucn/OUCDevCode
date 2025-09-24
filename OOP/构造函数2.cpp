#include <iostream>
using namespace std;

class clock
{
public:
	clock(int newh, int newm, int news);//构造函数   
	//构造函数的函数体放在类声明的里面也行

	void settime(int newh, int newm, int news);
	void showtime();

private:
	int hour,minute, second;
};


//构造函数的实现
clock::clock(int newh, int newm, int news)
{
	hour = newh;
	minute = newm;
	second = news;

}  //构造函数的函数体放在类声明的外面

void clock::settime(int newh, int newm, int news)
{
	hour = newh;
	minute = newm;
	second = news;
}

void clock::showtime()
{
	cout << "123" << endl;
}


int main()
{
	clock my(0, 0, 0);  //隐含clock的构造函数，将初始值作为实参
	my.settime(1, 2, 3);
	my.showtime();

	return 0;
}