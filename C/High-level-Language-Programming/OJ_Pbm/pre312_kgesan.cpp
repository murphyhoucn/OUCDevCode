// assignment 11
// 含k个3的数

# include <iostream>
using namespace std;
int coutnum(int mm);
int main()
{
    int m;
    int k;
    cin >> m >> k;
    int count = coutnum(m);

    if (m % 19 == 0 && count == k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;

}

int coutnum(int mm)
{
    int cout = 0;
    while (mm > 0)
    {
        if (mm % 10 == 3){cout++;}
        mm /= 10;
    }

    return cout;
}