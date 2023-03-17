// assignment 5
// 简单计算器

# include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a >> b >> c;

    switch (c)
    {
        case '+' : cout << a + b; break;
        case '-' : cout << a - b; break;
        case '*' : cout << a * b; break;
        case '/' :
            if (b != 0){cout << a / b; break;}
            else {cout << "Divided by zero!"; break;}
        default: cout << "Invalid operator!";
    }
    return 0;
}