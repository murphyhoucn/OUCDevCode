#include <iostream>
using namespace std;
class A {
    int val;
public:
    A(int n) { val = n; }
    int GetVal() { return val; }
};
class B : public A {
private:
    int val;
public:
    B(int n) :
        // 在此处补充你的代码
    A(n * 3), val(n * 2) {}
    int GetVal() { return val; }
};
int main() {
    B b1(2);
    cout << b1.GetVal() << "," << b1.A::GetVal() << endl;
    return 0;
}