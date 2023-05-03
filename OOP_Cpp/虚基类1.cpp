#include <iostream>
using namespace std;

class base0
{
public:
	int var0
};



class clock
{
	clock & operator++ ();   //前置
	clock  operator ++(int);   //后置
};


virtual void fun()
{

}


虚析构函数

virtual ~类名（）；