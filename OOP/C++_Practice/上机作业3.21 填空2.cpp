#include <iostream>
using namespace std;
class A {
public:
    int val;
    // �ڴ˴�������Ĵ���
    A() {
        val = 0;
    }
    A(int v) {
        val = v;
    }
    A& GetObj() {
        return *this;
    }
};
main() {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}