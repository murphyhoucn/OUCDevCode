#include <iostream>
using namespace std;

class rectangle
{
public:
	int w;
	int h;
	int s(int w,int h);
	int c(int w, int h);
	void init(int w, int h);
};

int rectangle:: s(int w, int h) { return w * h; }

int rectangle :: c(int w, int h) { return 2 * (w + h); }

void rectangle:: init(int w1, int h1) { w = w1; h = h1; }



int main()
{
	int h, w;
	cin >> h >> w;
	rectangle a;
	cout << a.s(h,w) << endl;



	rectangle* b = &a;
		cout <<b->s(h, w) << endl;


	rectangle& c = a;
	cout << c.s(h, w) << endl;


	


	return 0;

}