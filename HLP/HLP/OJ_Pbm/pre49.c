# include <stdio.h>

//描述
//一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。
//输入
//一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式。
//输出
//该句子中最长的单词。如果多于一个，则输出第一个


// 参考CSDN

int main()
{
    char str[500];

    int i = 0;
    int place; //单词首字母的下标
    int max = 0;  // 最长单词的长度
    int count = 0; // 计数君
    int last_locate; // 最长单词首字母的下标


    fgets(str, 500, stdin);

    while (str[i] != '.')
    {
        if (str[i] == ' ')
        {
            i++;
        }
        place = i;
        for (; str[i] != ' ' && str[i] != '.'; i++)
        {
            count++;
        }

        if (count > max)
        {
            max = count;
            last_locate = place;
        }
        count = 0;
    }
    for (i = last_locate; str[i] != ' ' && str[i] != '.'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}