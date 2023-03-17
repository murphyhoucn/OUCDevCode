// https://blog.csdn.net/fun_always/article/details/94414416

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	(cin>>s).get();
	int num=0;
	int end=0;
	char boy = s[0];
	int a[105];
	a[0] = 0;
	for(int i=0;i<s.length();i++){
		if(boy==s[i]){
			end++;
			num++;
			a[end] = num;
		}
		else{
			num++;
			cout<<a[end]-1<<" "<<num-1<<endl;
			end--;
		}
	}
	return 0;
} 