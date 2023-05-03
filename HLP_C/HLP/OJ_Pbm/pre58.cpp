#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int leftcount=0,rightcount=0;
char a[105];
void panduan(char str[105],int q,int len)
{
    if(q==len)
    {
        return;
    }
    else if(str[q]=='(')
    {
        leftcount++;
        panduan (str,q+1,len);
        if(rightcount < 0)
        {
            a[q]=' ';
            rightcount++;
        }
        else
        {
            a[q]='$';
        }
    }
    else if(str[q]==')')
    {
        if(leftcount > 0)
        {
            a[q]=' ';
            leftcount--;
        }
        else
        {
            a[q]='?';
        }
        panduan(str,q+1,len);
        rightcount--;
    }
    else
    {
        panduan(str,q+1,len);
        a[q]=' ';
    }
}
int main()
{
    char str[105];
    while(cin.getline(str,100))
    {
        cout<<str<<endl;
        int len = strlen(str);
        panduan(str,0,len);
        cout <<a<<endl;
        leftcount =0;
        rightcount =0;
    }
    return 0;
}

