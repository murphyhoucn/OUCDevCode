#include <iostream>
using namespace std;


void splitfloat(float x, int* intpart, float* fracpart)
{
	*intpart = static_cast<int>(x);
	*fracpart = x - *intpart;
}


int main()
{
	cout << "enter 3 float point number:";

	for (int i = 0; i < 3; i++)
	{
		float x, f;
		int n;

		cin >> x;
		splitfloat(x, &n, &f);

		cout << "intpart=" << n << endl;
		cout << "fracpart=" << f << endl;


	}
	

	return 0;


}