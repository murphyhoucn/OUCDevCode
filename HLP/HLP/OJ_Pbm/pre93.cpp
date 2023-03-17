// 凯撒密码
# include <iostream>
# include <cstdio>
using namespace std;

int main()
{
    char alphabet[26];
    for (int i = 0; i <26; i++)
    {
        alphabet[i] = 'A' + i;
    }
    
    // for (int i = 0; i <26; i++)
    // {
    //     cout << alphabet[i] << endl;
    // }


    char in;
    int x;
    scanf("%c,%d", &in, &x);

    int index = 0;
    for (int i = 0; i <26; i++)
    {
        if (alphabet[i] == in)
        {
            index = i;
        }
    }

    cout << alphabet[(index + x)%26];

    return 0;
}