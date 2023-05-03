// exp5 assignment1
// 整数的个数
// 给定k（1 < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。
// 写程序计算给定的k个正整数中，1，5和10出现的次数。

# include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    
    int num1 = 0;
    int num5 = 0;
    int num10 = 0;

    for (int i = 0; i < k; i++)
    {
        int tmp;
        cin >> tmp;
        if(tmp == 1){num1++;}
        else if(tmp == 5){num5++;}
        else if(tmp == 10){num10++;}
    }
    cout << num1 << endl;
    cout << num5 << endl;
    cout << num10 << endl;  

    return 0;
}