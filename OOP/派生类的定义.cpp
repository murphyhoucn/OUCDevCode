#include <iostream>
using namespace std;
int main()
{

}

class base1 {

};

class base2 {

};

class derived :public base1 {

};

class derivaed2 :public base1, private base2 {

};