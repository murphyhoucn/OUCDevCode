#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str, substr;
    while(cin>>str>>substr){
        int n = str.length();
        int max = 0;
        for(int i=0; i<n; i++)
            if(str[i]>str[max])
                max = i;
        for(int i=0; i<=max; i++)
            cout << str[i];
        cout<<substr;
        for(int i=max+1; i<n; i++)
            cout << str[i];
        cout << endl;
    }
    return 0;
}
