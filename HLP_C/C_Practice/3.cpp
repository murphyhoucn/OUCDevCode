#include<iostream>
#include<string>

using namespace std;

int main() {
	string a;
	string b;
	cin >> a;
	cin >> b;
	int i;
	int j = 0;
	int k = 0;
	int m = 0;
	if (a.length() < b.length()) {
		while (a.length() != b.length())
		{
			a += " ";
		}
	}
	else {
		while (a.length() != b.length())
		{
			b += " ";
		}
	}
	string c;
	c=a+b;
	for (i = 0; i < (int)a.length() * 2; i++)
	{
			if (i == 0 || i % 2 == 0) {
				c[i] = a[m];
				m++;
			}
			else {
				c[i] = b[k];
				k++;
			}
    }
    int flag = 0;
    flag = c.find(" ",flag);
    while(flag!=-1){
        c.replace(flag,1,"");
        flag=c.find(" ",flag);
    }
	cout << c;
	return 0;
}
