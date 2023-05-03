#include <iostream>
#include <cstdio>
#include <map>
#include <cmath>
using namespace std;

int n, id, d;
map<int, int> m;

int main()
{
	m.insert(pair<int, int>(1000000000, 1));
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &id, &d);
		map<int, int>::iterator it = m.lower_bound(d);
		printf("%d ", id);
		if (it == m.end())
		{
			it--;
			printf("%d\n", it->second);
		}
		else if (it == m.begin())
		{
			printf("%d\n", it->second);
		}
		else
		{
			int tmp = abs(it->first - d);
			int res = it->second;
			it--;
			int tmp2 = abs(it->first - d);
			if (tmp2 < tmp || (tmp2 == tmp && it->second < res))
			{
				res = it->second;
			}
			printf("%d\n", res);
		}
		if (!m.count(d) || m[d] > id)
		{
			m[d] = id;
		}
	}
	return 0;
}