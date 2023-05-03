// 将a、b中的两位正整数合并形成一个新的整数放在c中。
// 合并的方式是：将a中的十位和个位依次放在变量c的百位和个位上，
// b中的十位和个位数依次放在变量c的十位和千位上。

# include <iostream>
# include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);

    int agewei = a % 10;
    int ashiwei = a / 10;

    int bgewei = b % 10;
    int bshiwei = b / 10;

    int c = bgewei*1000 + ashiwei*100 + bshiwei*10 + agewei;
    cout << c;

    return 0;

}