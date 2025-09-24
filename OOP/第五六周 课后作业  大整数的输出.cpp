#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;
const int MAX = 110;
class CHugeInt {
	// 在此处补充你的代码
private:
	int len;
	unsigned short *num;
public:
	CHugeInt() { num = NULL; len = 0; }
	CHugeInt(const char *s)
	{
		len = strlen(s);
		num = new unsigned short[len];
		for (int j = len - 1, i = 0; j >= 0; j--, i++)
			num[i] = s[j] - '0';
	}
	CHugeInt(int n)
	{
		num = NULL; len = 0;
		unsigned short tmp[10];	// biggest unsigned int: 4294967295
		if (!n)
			tmp[len++] = 0;
		else {
			while (n)
			{
				tmp[len++] = n % 10;
				n /= 10;
			}
		}
		num = new unsigned short[len];
		for (int i = 0; i < len; i++)
			num[i] = tmp[i];
	}
	CHugeInt(const CHugeInt & I)
	{
		num = NULL; len = 0;
		len = I.len;
		num = new unsigned short[len];
		for (int i = 0; i < len; i++)
			num[i] = I.num[i];
	}
	~CHugeInt()
	{
		if (num) delete[] num;
	}
	CHugeInt & operator=(const CHugeInt & I)
	{
		if (num) delete[] num;
		len = I.len;
		num = new unsigned short[len];
		for (int i = 0; i < len; i++)
			num[i] = I.num[i];
		return *this;
	}
	CHugeInt & operator+=(int n)
	{
		unsigned short tmp[10];	// biggest unsigned int: 4294967295
		int n_len = 0;
		if (!n)
			tmp[n_len++] = 0;
		else {
			while (n)
			{
				tmp[n_len++] = n % 10;
				n /= 10;
			}
		}
		CHugeInt res;
		res.len = (len > n_len) ? len : n_len;
		int min_len = (len > n_len) ? n_len : len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		for (int i = 0; i < min_len; i++)
		{
			res.num[i] = (num[i] + tmp[i] + carry) % 10;
			carry = (num[i] + tmp[i] + carry) / 10;
		}
		if (min_len == n_len)
		{
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (num[i] + carry) % 10;
				carry = (num[i] + carry) / 10;
			}
		}
		else {	// min_len == L.len
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (tmp[i] + carry) % 10;
				carry = (tmp[i] + carry) / 10;
			}
		}
		if (carry)
			res.num[res.len++] = carry;
		*this = res;	// operator =
		return *this;
	}
	CHugeInt & operator++()	// 前置 
	{
		CHugeInt res;
		res.len = len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		res.num[0] = (num[0] + 1 + carry) % 10;
		carry = (num[0] + 1 + carry) / 10;
		for (int i = 1; i < res.len; i++)
		{
			res.num[i] = (num[i] + carry) % 10;
			carry = (num[i] + carry) / 10;;
		}
		if (carry)
			res.num[res.len++] = carry;
		*this = res;	// operator =
		return *this;
	}
	CHugeInt operator++(int)	// 后置 
	{
		CHugeInt temp = *this;	// copy constructor
		CHugeInt res;
		res.len = len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		res.num[0] = (num[0] + 1 + carry) % 10;
		carry = (num[0] + 1 + carry) / 10;
		for (int i = 1; i < res.len; i++)
		{
			res.num[i] = (num[i] + carry) % 10;
			carry = (num[i] + carry) / 10;;
		}
		if (carry)
			res.num[res.len++] = carry;
		*this = res;	// operator =
		return temp;
	}
	friend CHugeInt operator+(const CHugeInt & L, const CHugeInt & R)	// a+b	
	{
		CHugeInt res;
		res.len = (L.len > R.len) ? L.len : R.len;
		int min_len = (L.len > R.len) ? R.len : L.len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		for (int i = 0; i < min_len; i++)
		{
			res.num[i] = (L.num[i] + R.num[i] + carry) % 10;
			carry = (L.num[i] + R.num[i] + carry) / 10;
		}
		if (min_len == R.len)
		{
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (L.num[i] + carry) % 10;
				carry = (L.num[i] + carry) / 10;
			}
		}
		else {	// min_len == L.len
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (R.num[i] + carry) % 10;
				carry = (R.num[i] + carry) / 10;
			}
		}
		if (carry)
			res.num[res.len++] = carry;
		return res;
	}
	friend CHugeInt operator+(int n, const CHugeInt & R)	// n+a
	{
		unsigned short tmp[10];	// biggest unsigned int: 4294967295
		int n_len = 0;
		while (n)
		{
			tmp[n_len++] = n % 10;
			n /= 10;
		}
		CHugeInt res;
		res.len = (R.len > n_len) ? R.len : n_len;
		int min_len = (R.len > n_len) ? n_len : R.len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		for (int i = 0; i < min_len; i++)
		{
			res.num[i] = (tmp[i] + R.num[i] + carry) % 10;
			carry = (tmp[i] + R.num[i] + carry) / 10;
		}
		if (min_len == n_len)
		{
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (R.num[i] + carry) % 10;
				carry = (R.num[i] + carry) / 10;
			}
		}
		else {	// min_len == R.len
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (tmp[i] + carry) % 10;
				carry = (tmp[i] + carry) / 10;
			}
		}
		if (carry)
			res.num[res.len++] = carry;
		return res;
	}
	friend CHugeInt operator+(const CHugeInt & L, int n)	// a+n
	{
		unsigned short tmp[10];	// biggest unsigned int: 4294967295
		int n_len = 0;
		while (n)
		{
			tmp[n_len++] = n % 10;
			n /= 10;
		}
		CHugeInt res;
		res.len = (L.len > n_len) ? L.len : n_len;
		int min_len = (L.len > n_len) ? n_len : L.len;
		res.num = new unsigned short[res.len + 1];
		unsigned short carry = 0;
		for (int i = 0; i < min_len; i++)
		{
			res.num[i] = (L.num[i] + tmp[i] + carry) % 10;
			carry = (L.num[i] + tmp[i] + carry) / 10;
		}
		if (min_len == n_len)
		{
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (L.num[i] + carry) % 10;
				carry = (L.num[i] + carry) / 10;
			}
		}
		else {	// min_len == L.len
			for (int i = min_len; i < res.len; i++)
			{
				res.num[i] = (tmp[i] + carry) % 10;
				carry = (tmp[i] + carry) / 10;
			}
		}
		if (carry)
			res.num[res.len++] = carry;
		return res;
	}
	friend ostream & operator<<(ostream & os, const CHugeInt I)	// 不是CHugeInt & I，为了cout << a+b; 
	{
		for (int i = I.len - 1; i >= 0; i--)
			os << I.num[i];
		return os;
	}

};
int  main()
{
	char s[210];
	int n;

	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);

		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout << ++b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}