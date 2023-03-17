# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    int a[10];
    int *p = NULL;
    int *q = NULL;
    int tmp;

    for (p = a; p < a + 10; p++)
    {
        cin >> *p;
    }

    for (p = a, q = a + 9; p < q; p++, q--)
    {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }

    for(p = a; p < a + 10; p++)
    {
        cout << setw(3) << *p;
    }
    return 0;
}