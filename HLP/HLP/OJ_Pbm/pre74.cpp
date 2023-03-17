/*
有10个学生，每个学生的数据包括学号，语文、数学、物理三门课的成绩，
从键盘输入10个学生数据，
要求打印出按平均分从高到低排序的学生名单，
格式：学号-语文成绩-数学成绩-物理成绩-平均成绩。

成绩均为整数（0 <= grade <= 100)，平均分为小数，无并列情况

*/

# include <iostream>
# include <stdio.h>
#include <cmath>
 
using namespace std;

# define N 10

struct Student
{
    int num;
    int yuwen;
    int shuxue;
    int wuli;
    float pingjun;
};

Student stu[N];

int main()
{
    for (int i = 0; i < N; i++)
    {
        cin >> stu[i].num >> stu[i].yuwen >> stu[i].shuxue >> stu[i].wuli;
        stu[i].pingjun = (float)(stu[i].yuwen + stu[i].shuxue + stu[i].wuli) / 3.0 ;
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 1; j < N - i; j++)
        {
            Student tmp;
            if (stu[j - 1].pingjun < stu[j].pingjun)
            {
                tmp = stu[j];
                stu[j] = stu[j - 1];
                stu[j - 1] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        // cout << stu[i].num << '-' << stu[i].yuwen << '-' << stu[i].shuxue << '-' << stu[i].wuli << '-' << stu[i].pingjun << endl;
        printf("%d-%d-%d-%d-%.2f", stu[i].num, stu[i].yuwen, stu[i].shuxue, stu[i].wuli, stu[i].pingjun);
        if (i != N-1){cout << endl;}
    }

    return 0;
}