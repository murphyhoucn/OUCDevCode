#include <iostream>
using namespace std;
class Sample {     
public:
	int v;
	// �ڴ˴�������Ĵ���
	Sample(const Sample& x)    //���ƹ��캯��
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
	Sample a(5);   //5����ֵ����a
	//Sample a=5;
	Sample b = a;  // b=a.v+2;b==7
	PrintAndDouble(b); // b����PrintAndDouble�����У�   ���9
	Sample c = 20;
	PrintAndDouble(c); //c+2      ���22
	Sample d;    //a ��ֵ��Ȼ��5
	d = a;
	cout << d.v;  //���5
	return 0;
}