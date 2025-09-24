/*
甲壳虫的《A day in the life》和《Tomorrow never knows》脍炙人口，
如果告诉你 a day in the life，真的会是 tomorrow never knows？相
信学了计概之后这个不会是难题，现在就来实现吧。

读入一个格式为 yyyy-mm-dd 的日期（即年－月－日），
输出这个日期下一天的日期。

可以假定输入的日期不早于 1600-01-01，也不晚于 2999-12-30。
*/

#include <stdio.h> //注意此头文件一定要写对，否则提交出错
#include <stdbool.h>
int main()
{
    int year=0,month=0,day=0;
    scanf("%d-%d-%d", &year, &month, &day);

    bool leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 ==0);
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day == 31)
        {
            month++;
            day = 1;
        } 
        else
        {
            day++;
        }
        break;
    case 12:
        if (day == 31)
        {
            year++;
            month = 1;
            day = 1;
        } 
        else
        {
            day++;
        }
        break;
    case 2:
        if (leapyear)
        {
            if (day == 29)
            {
                month ++;
                day = 1;
            }
            else
            {
                day++;
            }
        } 
        else
        {
            if (day == 28)
            {
                month ++;
                day = 1;
            }
            else
            {
                day++;
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day == 30)
        {
            month++;
            day = 1;
        } 
        else
        {
            day++;
        }
        break;
    default:
        break;
    }
    printf("%d-%02d-%02d\n", year, month, day);


    /*
    %d就是普通的输出了
    %2d是将数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补空格
    %02d，和%2d差不多，只不过左边补0
    %.2d没见过，但从执行效果来看，和%02d一样
    */
    return 0;
}