/*
在一个平面上，如果有两个点(x,y),(a,b),如果说(x,y)支配了(a,b)，这是指x>=a,y>=b;
用图形来看就是(a,b)坐落在以(x,y)为右上角的一个无限的区域内。 　　　 　　
给定n个点的集合，一定存在若干个点，它们不会被集合中的任何一点所支配，这些点叫做极大值点。
请编程找出所有的极大点，按照x坐标由小到大，输出极大点的坐标。 
*/

# include <iostream>
# include <algorithm>

using namespace std;

struct point
{
	int x,y;
}p[20000]; 

bool cmp(struct point p1,struct point p2)
{
	return p1.x < p2.x;
}

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++) cin>>p[i].x>>p[i].y;

	sort(p,p+n,cmp);		//将所有点按x的大小进行排序 

	int k=0,max=-1;
	struct point pt[20000];
	
	for(int i=0;i<n;i++)
	{//存取每个x坐标上y最大值 
		if(p[i].y>max) max=p[i].y;

		if(p[i].x!=p[i+1].x&&i!=n-1)
		{   //判断该点是否为x相同的最后一个点或者是否为最后一个点 
			pt[k].x=p[i].x;
			pt[k].y=max;
			k++;
			max=-1;			//注意将max赋值-1，一开始我就这个忘了没有通过 
		}
		else if(i==n-1)
		{	//如果该点为最后一个点  
			pt[k].x=p[i].x;
			pt[k].y=max;
			k++;
			max=-1;
		}
	}

	for(int i=0;i<k-1;i++)
	{		//判断前一个点的y坐标是否小于等于后一个点的y坐标,如果是则不是极大点 
		bool f=true;
		for(int j=i+1;j<k;j++)
		{
			if(pt[i].y<=pt[j].y)
			{
				f=false;
				break;
			}
		}
		if(f)cout<<"("<<pt[i].x<<","<<pt[i].y<<"),";
	} 
	cout<<"("<<pt[k-1].x<<","<<pt[k-1].y<<")";	//最后一个x轴最大，直接输出就可以了 
	return 0;
}

