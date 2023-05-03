#include <iostream>
using namespace std;
class Sample {     
public:
	int v;
	// 在此处补充你的代码
	Sample(const Sample& x)    //复制构造函数
	{
		v = x.v + 2;
	}

	Sample(int n = 0)   
	{
		v = n;
	}

};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);   //5被赋值给了a
	//Sample a=5;
	Sample b = a;  // b=a.v+2;b==7
	PrintAndDouble(b); // b传到PrintAndDouble函数中，   输出9
	Sample c = 20;
	PrintAndDouble(c); //c+2      输出22
	Sample d;    //a 的值仍然是5
	d = a;
	cout << d.v;  //输出5
	return 0;
}