#include <iostream>
using namespace std;

class clock
{
public:
	clock(int newh, int newm, int news);//���캯��   
	//���캯���ĺ��������������������Ҳ��

	void settime(int newh, int newm, int news);
	void showtime();

private:
	int hour,minute, second;
};


//���캯����ʵ��
clock::clock(int newh, int newm, int news)
{
	hour = newh;
	minute = newm;
	second = news;

}  //���캯���ĺ��������������������

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
	clock my(0, 0, 0);  //����clock�Ĺ��캯��������ʼֵ��Ϊʵ��
	my.settime(1, 2, 3);
	my.showtime();

	return 0;
}