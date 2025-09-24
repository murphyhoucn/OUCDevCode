#include <stdio.h>


// OJ已接受


int main()
{
	int k,x,y,m=1,n,i,j;
	int a[15][15]={0};
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(x=0,y=k-1;y>=0;x++,y--)
		{
			if(k%2==0)
			{
				a[x][y]=m;
				m++;
			}
			else
			{
				a[y][x]=m;
				m++;
			}
		}
	}
	for(k=n+1;k<2*n;k++)
	{
		for(x=n-1,y=k-1-x;y<=n-1;x--,y++)
		{
			if(k%2==0)
			{
				a[y][x]=m;
				m++;
			}
			else
			{
				a[x][y]=m;
				m++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
            if (j < n - 1) {printf(" ");}
		}
		printf("\n");	
	}	
}
