// https://blog.csdn.net/qq_40575034/article/details/102932482

#include<iostream>
#include<stdio.h>
using namespace std;
char a[102][102];
char b[102][102];//用来记录前一天的 
int main()
{
    long long sum=0;
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    for(int j=1;j<=n;j++)
    a[i][j]='.';//先初始化一下下 将正确的范围都包裹起来 

    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    cin>>a[i][j];//真正数据的输入 

    int m;
    cin>>m;


    for(int t = 1; t<m;t++)//要经过几天 
    {
    for(int i = 1; i<=n;i++)//将前一天的记录下来 
    for(int j = 1; j<=n;j++)
    b[i][j]=a[i][j];

    for(int i=1;i<=n;i++)
    for(int j=1; j<=n;j++)
    {
    if(a[i][j]=='.')//如果这是一个健康的人 
    {
        if(b[i-1][j]=='@'||b[i+1][j]=='@'||b[i][j-1]=='@'||b[i][j+1]=='@')//健康的人看看周围有没有得流感的 
        a[i][j]='@';
        } 
    }

    }

    for(int i = 1; i<=n;i++)
    for(int j = 1; j<=n;j++)
    if(a[i][j]=='@')
    sum++; 

    cout<<sum;
    return 0;
}
