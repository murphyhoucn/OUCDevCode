#include <iostream>
using namespace std;

class clock
{
public:
	clock();
	void settime(int newh, int newm, int news);
	~clock(){}  //��������


private:
	int h;
	int m;
	int s;

};

clock::clock()  //�޲ι��캯����ʵ��
{
	h = 0;
	m = 0;
	s = 0;
}


void clock::settime(int newh, int newm, int news)
{
	h = newh;
	m = newm;
	s = news;
	cout << h << ":" << m << ":" << s << endl;
}



int main()
{
	clock c;    
	c.settime(1, 2, 3);

	return 0;

}