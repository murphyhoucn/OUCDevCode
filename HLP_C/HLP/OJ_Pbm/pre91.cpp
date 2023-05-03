// 输入一个10进制正整数和进制数，输出此10进制数的k进制中包含的1的个数

# include <iostream>
#include<cstdio>
using namespace std;

char d[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int count = 0;
int turn(int n, int k)//将n转为k进制 
{
	int r=0;
	r = n%k; 
	n = n/k;
	if(n!=0) {turn(n,k);} 
    // cout << "ceshi1:" << d[r] << endl;
    if (d[r] == '1'){count++;}
    return count;
}
 
 
int main()
{
	int x, m;
	scanf("%d%d",&x,&m);
	int ret = turn(x,m);
    cout << ret;
	return 0;
}