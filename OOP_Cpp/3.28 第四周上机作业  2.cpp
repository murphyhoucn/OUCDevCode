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
    // �ڴ˴�������Ĵ���
    Big(int a) :v(a), b(a) {}

};
int main() {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;
    cout << a2.v << "," << a2.b.k << endl;
    return 0;
}
//Big����һ������࣬������Big�����֮ǰ��
//��������Base��Ķ��󣨵���Base��Ĺ��캯������Big��ĳ�Ա����b����
//Ȼ���ٵ���Big��Ĺ��캯��������Big�����a1.
//����Big a2 = a1; �У�����Big��Ĭ�ϵĸ��ƹ��캯������a1ΪĬ�ϸ��ƹ��캯���Ĳ��������ɶ���a2.