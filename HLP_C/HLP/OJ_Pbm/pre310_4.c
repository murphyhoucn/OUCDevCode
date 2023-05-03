// 老师讲解的思路

// 上交OJ可通过

#include<stdio.h>
int main() 
{
	int n;
	int a[100];
	int count=0,k=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	while (count <= 20) 
	{
		if (k > n - 1 || k < 0) 
		{
			printf("no");
			return 0;
		}	
		else if (k ==n - 1) 
		{
			printf("%d %d\n", k, a[k]);
				printf("yes");
				return 0;
		}
		else 
		{
			printf("%d %d\n", k, a[k]);
			k = k + a[k];
			count++;
		}
	}

	printf("no");
	return 0;
}
