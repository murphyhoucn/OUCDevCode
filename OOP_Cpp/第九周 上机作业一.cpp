#include <iostream>
using namespace std;
class CPerson {
public:
    virtual void hello() {
        cout << "I'm a person" << endl;
    }
    virtual void bye() {
        cout << "Bye, person" << endl;   //���2
    }
};
class CMan : public CPerson {
public:
    // �ڴ˴�������Ĵ���
    void hello() {
        cout << "I'm a man" << endl;    //���1
    }
    void bye() {
        cout << "Bye, man" << endl;
    }

};
class CReek : public CMan {
public:
    void hello() {
        cout << "I'm a reek" << endl;
    }
    void bye() {
        cout << "Bye, reek" << endl;
    }
};

int main() {
    CReek r;
    return 0;
}