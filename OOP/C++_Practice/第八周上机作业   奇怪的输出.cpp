#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

class A {
    // 在此处补充你的代码
private:
    int x;

public:
    

    friend ostream& operator <<(ostream & output, const A & c)
    {
        output << c << endl;
        return output;
    }

     
     A(int n)
     {
         x = n;
         
         cout << x << endl;;
     };

     operator string() { return ; }

};
int main()
{
    A a(5), b(6);
    cout << (string)a << endl;
    cout << b << endl;
    return 0;
}