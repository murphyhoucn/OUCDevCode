#include<iostream>
using namespace std;
int main()
{
	string s;
    int k=0;
	getline(cin,s);
	s = s + " ";
	int len = s.length();

    // printf("ceshi:n = %d\n",len);	
	
	for(int i=0;i<len;i++)
    {
		if(s[i] == ' ')
        {
			for(int j = i - 1; j > k - 1; j--)
            {
				cout << s[j];
			}
			cout << " ";
			k = i + 1;
		}
	}
	return 0;
}