# include <iostream>
using namespace std;

int main()
{
    int iCount = 18;
    int *p = &iCount;
    // int *p;
    // p = &icount;

    *p = 58;
    cout << iCount << endl;

    cout << p << endl;
    cout << &iCount << endl;

    cout << &p << endl;

    return 0;
    
}