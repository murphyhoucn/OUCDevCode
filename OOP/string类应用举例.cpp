#include <iostream>
#include <string>
using namespace std;

inline void test(const char* title, bool value)
{
	cout << title << "returns   " << (value ? "true" : "false") << endl;
}

int main()
{
	string s1 = "def";
	cout << "s1 is:   " << s1 << endl;

	string s2;
	cout << "please enter s2:   ";
	cin >> s2;
	cout << "length of s2 is:   " << s2.length() << endl;


	test("s1<=\"abc\"", s1 <= "abc");
	test("\"def\" <= s1", "def" <= s1);


	s2 += s1;
	cout << "s2=s2+s1:   " << s2 << endl;
	cout << "length of s2:   " << s2.length() << endl;

	return 0;
}