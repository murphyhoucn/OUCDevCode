#include <iostream>
using namespace std;

void printStuff(float)
{
	cout << "this is the printstuff fuction." << endl;
}

void printmassage(float data)
{
	cout << "this data to be listed is : " << data << endl;
}

void printfloat(float data)
{
	cout << "the data to be printed is : " << data << endl;
}


const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

int main()
{
	void (*functionpointer)(float);
	printStuff(PI);
	functionpointer = printStuff;
	functionpointer(PI);
	functionpointer = printmassage;
	functionpointer(TWO_PI);
	functionpointer(13.0);
	functionpointer = printfloat;
	functionpointer(PI);
	printfloat(PI);


	return 0;
}