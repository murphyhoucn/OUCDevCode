#include<iostream>
#include <stdio.h>
using namespace std;


long long int a, b;
long long int f(long long int a, long long int b)
{
	long long int ans = 1 % 1000000007;

	while (b)
	{
		if (b & 1)  ans = ans * a% 1000000007;
		a = a * a% 1000000007;
		b >>= 1;
	}

	return ans;
}
int main()
{
	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	//scanf("%lld", &a);
	//scanf("%lld", &b);
	printf("%lld", f(a, b));
	return 0;
}