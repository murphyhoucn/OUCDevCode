#include<iostream>
#include<list>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int n, x1, x2;
	list<int> a[10001];  
	cin >> n;
	while (n--)
	{
		string st;
		cin >> st;
		if (st == "new")  
		{
			cin >> x1;
		}
		else if (st == "add")
		{
			cin >> x1 >> x2;
			a[x1].push_back(x2);
		}
		else if (st == "merge")
		{
			cin >> x1 >> x2;
			a[x1].merge(a[x2]);  
		}
		else if (st == "unique")  
		{
			cin >> x1;
			a[x1].sort();
			a[x1].unique();
		}
		else if (st == "out")
		{
			cin >> x1;
			a[x1].sort();
			list<int>::iterator i;
			for (i = a[x1].begin(); i != a[x1].end(); i++)
			{
				cout << *i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
