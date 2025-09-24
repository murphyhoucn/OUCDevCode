#include <iostream>
using namespace std;
class Base {
public:
    int k;
    Base(int n) :k(n) { }
};
class Big {
public:
    int v; Base b;
    // 在此处补充你的代码
    Big(int a) :v(a), b(a) {}

};
int main() {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;
    cout << a2.v << "," << a2.b.k << endl;
    return 0;
}
//Big类是一个封闭类，在生成Big类对象之前，
//会先生成Base类的对象（调用Base类的构造函数生成Big类的成员对象b），
//然后再调用Big类的构造函数，生成Big类对象a1.
//代码Big a2 = a1; 中，调用Big类默认的复制构造函数，以a1为默认复制构造函数的参数，生成对象a2.