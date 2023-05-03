#include <cstdlib>
#include <iostream>
using namespace std;
int strlen_s(const char * s)
{
	int i = 0;
	for (; s[i]; ++i);
	return i;
}
void strcpy_s(char * d, const char * s)
{
	int i = 0;
	for (i = 0; s[i]; ++i)
		d[i] = s[i];
	d[i] = 0;

}
int strcmp(const char * s1, const char * s2)
{
	for (int i = 0; s1[i] && s2[i]; ++i) {
		if (s1[i] < s2[i])
			return -1;
		else if (s1[i] > s2[i])
			return 1;
	}
	return 0;
}
void strcat_s(char * d, const char * s)
{
	int len = strlen_s(d);
	strcpy_s(d + len, s);
}
class MyString
{
	// 在此处补充你的代码
public:
	MyString() { char *sValue; }     

	MyString(const char *s) {
		int n = strlen_s(s);
		sValue = new char[n + 1];
		int i;
		for (i = 0; i < n; i++)
			sValue[i] = s[i];
		sValue[i] = '\0';
	};
	MyString(const string &s) {
		sValue = new char[strlen(s.c_str()) + 1];
		strcpy_s(sValue, s.c_str());
	};

	MyString operator()(int i, int j) {   //重载
		MyString res;
		res.sValue = new char[j];
		int start = i;
		int idx = 0;
		for (idx = 0; idx < j; idx++)
			res.sValue[idx] = sValue[start++];
		res.sValue[idx] = '\0';
		return res;
	}
	char& operator[](int i) { return sValue[i]; }
	friend ostream& operator<<(ostream &os, const MyString &s)
	{
		if (s.sValue == NULL)
			return os;
		else
		{
			os << s.sValue;
			return os;
		}
	}
	friend MyString operator+(const char*str, const MyString &rhs)
	{
		MyString res(str);
		res = res + rhs;
		return res;
	}
	MyString operator+(const MyString &rhs)
	{
		MyString res;
		int n = strlen_s(sValue) + strlen_s(rhs.sValue);
		res.sValue = new char[n];
		strcpy_s(res.sValue, sValue);
		strcat_s(res.sValue, rhs.sValue);
		return res;
	}
	MyString operator+(const char *rhs)
	{
		MyString res;
		MyString r(rhs);
		res = *this + r;
		return res;
	}
	MyString& operator+=(const char *rhs) {
		MyString res;
		MyString r(rhs);
		res = *this + r;
		*this = res;
		return *this;
	}
	bool operator < (const MyString & rhs) {
		int flag = strcmp(sValue, rhs.sValue);
		if (flag == -1)
			return true;
		else
		{
			return false;
		}
	}
	bool operator > (const MyString & rhs) {
		int flag = strcmp(sValue, rhs.sValue);
		if (flag == 1)
			return true;
		else
		{
			return false;
		}
	}
	bool operator ==(const MyString & rhs) {
		int flag = strcmp(sValue, rhs.sValue);
		if (flag == 0)
			return true;
		else
		{
			return false;
		}
	}
private:
	char* sValue;
};


int CompareString(const void * e1, const void * e2)
{
	MyString * s1 = (MyString *)e1;
	MyString * s2 = (MyString *)e2;
	if (*s1 < *s2)
		return -1;
	else if (*s1 == *s2)
		return 0;
	else if (*s1 > *s2)
		return 1;
}
int main()
{
	MyString s1("abcd-"), s2, s3("efgh-"), s4(s1);
	MyString SArray[4] = { "big","me","about","take" };
	cout << "1. " << s1 << s2 << s3 << s4 << endl;
	s4 = s3;
	s3 = s1 + s3;
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;
	s2 = s1;
	s1 = "ijkl-";
	s1[2] = 'A';
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = "qrst-" + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
	//qsort(SArray, 4, sizeof(MyString), CompareString);
	for (int i = 0; i < 4; i++)
		cout << SArray[i] << endl;
	//s1的从下标0开始长度为4的子串
	cout << s1(0, 4) << endl;
	//s1的从下标5开始长度为10的子串
	cout << s1(5, 10) << endl;
	return 0;
}