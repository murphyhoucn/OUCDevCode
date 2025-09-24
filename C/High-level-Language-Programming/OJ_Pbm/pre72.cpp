#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*
5
A
TCG
ATCG
GCAAA
TTTTTT

*/
int main()
{
    int k;
    cin >> k;
    getchar();  // 接收 输入k后面的那个空格
    while (k != 0)
    {
        char a[256];
        int len;
        fgets(a, 256, stdin);

        len = strlen(a);//计算字符串长度

        for(int i=0; i < len; i++)
        { 
            if(a[i]=='A')	cout<<"T";  //输出配对碱基
            if(a[i]=='T')	cout<<"A";
            if(a[i]=='G')	cout<<"C";
            if(a[i]=='C')	cout<<"G";
        }
        cout<<endl;
        k--;
    }
    
    return 0;
}
