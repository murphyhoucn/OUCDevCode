#include<iostream>
using namespace std;
int main()
{
int a[5]={1,2,3,4,5};
int *p=&a[3];
// *p=100; //a[3] = 100;
cout<<*(p++)<<endl;  //先p++：先
cout<<*p--<<endl;
// cout<<*p<<endl;
cout<<*--p<<endl;
return 0;
}

/*
a++. 先取值，后自增
++a，先自增，后取值
*/