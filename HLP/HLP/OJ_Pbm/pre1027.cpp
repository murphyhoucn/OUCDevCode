# include<cstdio>
# include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a,b,i,j,c;

	for(a=1;a<n;a++)
	{
		b=0;
		for(i=1;i<=a/2;i++)
			if(a%i==0)
				b+=i;//	b=a的因子和
		c=0;
		for(j=1;j<=b/2;j++)
			if(b%j==0)
				c+=j;//	c=b的因子和
		if(a==c&&a<b)//	排除重复
			printf("%d %d\n",a,b);
	}
	return 0;
}

