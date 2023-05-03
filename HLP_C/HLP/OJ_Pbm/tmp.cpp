
#include <bits/stdc++.h>
using namespace std;
int f(int m,int n)
{
	if(m==0||n==1) 
	{
		return 1;	
	}
	if(n>m)
	{
		return f(m,m);	
	}
	else
	{
		return f(m,n-1)+f(m-n,n);
	}
}
int main()
{
	int m,n,c;
	cin>>c; // 实验次数
	while(c--)
	{
		cin>>m>>n;
		cout<<f(m,n);
	}
	return 0;
}

