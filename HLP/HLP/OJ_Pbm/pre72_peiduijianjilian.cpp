// assignment 9
// 配对碱基链

/*
5
A
TCG
ATCG
GCAAA
TTTTTT
*/


# include <iostream>
# include <cstring>
using namespace std;

int main()
{
    int k;
    cin >> k;
    getchar(); // 必要
    while (k != 0)
    {
        char lian[1000];
        fgets(lian, 1000, stdin);

        int len = strlen(lian);
        // cout << len << endl;

        for(int i = 0; i < len; i++)
        {
            if (lian[i] == 'A') { cout <<'T'; }
            if (lian[i] == 'T') { cout <<'A'; }
            if (lian[i] == 'G') { cout <<'C'; }
            if (lian[i] == 'C') { cout <<'G'; }
        }
        cout << endl;

        k--;
    }

    return 0;
}