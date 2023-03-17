// assignment 8
// 给一段英文短文，单词之间以空格分隔（每个单词包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：
// 每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。

// 这个题目有点难，很绕

# include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    char danci[1000][100];
    int zifushu[1000];

    int i, j;
    for (i = 0; i < num; i++)
    {
        cin >> danci[i];
    }
    for(i = 0; i < num; i++)
    {
        for (j = 0; ;j++)
        {
            if (danci[i][j] != '\0')
            {
                zifushu[i]++;
            }
            else
            {
                break;
            }
        }
    }

    int leiji = 0;
    int shuchudancishu = 0;
    for(i = 0; i < num; i++)
    {
        leiji = leiji + zifushu[i] + 1;
        if (leiji > 81)
        {
            for(j = shuchudancishu; j < i - 1; j++)
            {
                cout << danci[j] << ' ';
            }
            cout << danci[j] << endl;
            leiji = 0;
            shuchudancishu = i;
            i--;
        }
    }
    for (j = shuchudancishu; j < i -1; j++)
    {
        cout << danci[j] << ' ';
    }
    cout << danci[j] << endl;
    return 0;

}