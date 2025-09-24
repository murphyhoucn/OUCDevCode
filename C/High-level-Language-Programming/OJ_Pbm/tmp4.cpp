#include<iostream>
using namespace std;
int main()
{
    int iCount=18;
    int *iPtr=&iCount;
    *iPtr=58;
    cout<<iCount<<endl; // 58
    cout<<iPtr<<endl; // 变量icount 的地址
    cout<<&iCount<<endl; // 变量icount 的地址
    cout<<*iPtr<<endl; // 58
    cout<<&iPtr<<endl; // 变量iptr的地址
    return 0;
}
