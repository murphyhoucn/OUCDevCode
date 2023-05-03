// assignment4
// 最长单词

# include <iostream>
using namespace std;

int main()
{
    char array[500];

    fgets(array, 500, stdin);

    int location = 0; // 最长单词的首字母下表
    int place = 0; // 出现新单词，则首字母下表就赋给place
    int count = 0; // 每个单词字母数的统计
    int maxword = 0; // 最长单词的有多少个字母

    int i = 0; // 遍历开始

    while (array[i] != '.')
    {
        if (array[i] == ' ')
        {
            i++;
        }

        place = i;

        for (; array[i] != ' ' && array[i] != '.'; i++)
        {
            count++;
        }

        // cout << "ceshi count:" << count << endl;

        if (count > maxword)
        {
            maxword = count;
            location = place;
        }
        count = 0;
    }

    for(i = location; array[i] != ' ' && array[i] != '.'; i++)
    {
        cout << array[i];
    }

    return 0;
}