#include <iostream>
#include <cstring>
using namespace std;

class Matrix {
public:
	int ** p;
	// 在此处补充你的代码
	////////////////////////////////////////////////////////////////////////////////////////////

	
	Matrix operator *(const Matrix &a,const Matrix &b)
	{

	}

	friend istream &operator >> (istream &i, const Matrix &a)  //输入
	{

	}


	///////////////////////////////////////////////////////////////////////////
	friend ostream & operator << (ostream &o, const Matrix &a) {   //输出
		for (int i = 0; i < a.r; i++) {
			for (int j = 0; j < a.c; j++) o << a.p[i][j] << " ";
			o << endl;
		}
		return o;
	}
};

int main() {
	Matrix a, b;
	cin >> a >> b;
	cout << a * b << endl;
	return 0;
}