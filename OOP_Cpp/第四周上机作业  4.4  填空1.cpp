#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r, i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex& operator = (const char* a)
    {
        string str = a;
        int x = str.find("+");
        //printf("%d\n", x);
        string real = str.substr(0, x);

        r = atof(real.c_str());
        string ima = str.substr(x + 1, str.length() - x - 2);
        i = atof(ima.c_str());
        return *this;
    }


};

int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}


