#include <iostream>
using namespace std;

inline char* dbtest(int n)
{
	return (n % 2 > 0) ? "ji" : "ou";
}

int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		cout<<i<<"de ji ou xing"<<dbtest(i)<<endl;
	}


	return 0;
}