
#include <iostream>
#include <map>
using namespace std;
int main()
{
	typedef map<int, int> CLUB;
	CLUB mem;
	mem[1000000000] = 1;
	int power, id;
	int n;
	cin >> n;
	CLUB::iterator it;
	while (n--)
	{
		cin >> id >> power;
		it = mem.lower_bound(power);
		if (it != mem.begin())
		{
			CLUB::iterator it1 = it;
			it--;
			if (power - it->first <= it1->first - power)
			{
				cout << id << ' ' << it->second << endl;
			}
			else
			{
				cout << id << ' ' << it1->second << endl;
			}
			mem[power] = id;
		}
		else
		{
			cout << id << ' ' << it->second << endl;
			mem[power] = id;
		}
	}
	return 0;
}
