# include <stdio.h>

// 用户输入N和K（K<N），然后接着输入N个正整数（无序的），
// 程序在不对N个整数排序的情况下，找出第K大的数。

// 注意，第K大的数意味着从大到小排在第K位的数。


// 注意： getchar() 提交的时候去掉

// 参考CSDN：https://blog.csdn.net/Zxl19990529/article/details/78980165


int great(int a[1000],int x,int y);

int main()
{
	int array[1000];
    int n,k;
    int i;

	scanf("%d", &n);
	scanf("%d", &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	int K;
	K = great(array, n, k-1);

	printf("%d", array[K]);

	return 0;
}


int great(int a[1000], int x, int y)
{
    /*
        n k-1
        x y
    */

    int i, j;
    int temp;


    int b[1000] = {0};

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            temp = a[i] - a[j];
            if (temp < 0) { b[i]++; }
        }
    }

    for(i = 0; i < x; i++)
    {
        if (b[i] == y) { return i; break; }	
    }
}