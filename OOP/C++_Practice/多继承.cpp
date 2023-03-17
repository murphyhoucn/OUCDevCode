#include <iostream>
using namespace std;

class a {
public:
	void seta(int);
	void showa()const;

private:
	int a;
};

class b {
public:
	void setb(int);
	void showb()const;
private:
	int b;
};

class c :public a, private b          //¶à¼Ì³Ð
{
public:
	void setc(int, int,int);
	void showc()const;
private:
	int c;
};

void a::seta(int x) { a = x; }
void b::setb(int x) { b = x; }
void c::setc(int x, int y,int z) { seta(x); setb(y); c = z; }



int main()
{
	c obj;
	obj.seta(5);
	obj.showa();
	obj.setc(6, 7, 9);
	obj.showc();

	//obj.setb(6);
	//obj.showb();

	return 0;
}
