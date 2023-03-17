#include <iostream>
#include <string>

using namespace std;
template <class T>
class CMyistream_iterator
{
	// 在此处补充你的代码
	//设置inputInt 
	istream& r;            //cin类 成员 
	T s;
public:
	//	 n1 = * inputInt; //读入 n1         // 79 返回n1的类型——即T 
	T operator *() {    //*（）重载 ，用于前置形式 
						//* inputInt相当于 inputInt.operator *() 
		return s;	     //得到v 
	}
	CMyistream_iterator(istream& rr) :r(rr) {   //构造函数 //赋予r意义 
		r >> s;                        //r到v中 
	}
	void operator ++ (int) {      //重载++ 
								//后置形式——括号中int无用 
		r >> s;               //inputInt ++ 等价于 inputInt.operator ++(0) 
	}
	//
};
int main()
{
	int t;
	cin >> t;       //T组数据，每组3个整数+2个字符串 
	while (t--) {
		CMyistream_iterator<int> inputInt(cin);     //Ci对象 inputInt 
		int n1, n2, n3;
		n1 = *inputInt; //读入 n1         // 79
		int tmp = *inputInt;
		cout << tmp << endl;        //79 
		inputInt++;              //inpuntInt 数组+1 
		n2 = *inputInt; //读入 n2        //90 
		inputInt++;
		n3 = *inputInt; //读入 n3              //20 
		cout << n1 << " " << n2 << " " << n3 << " ";          //79 90 20 
		CMyistream_iterator<string> inputStr(cin);   //string 模板 
		string s1, s2;
		s1 = *inputStr;            //hello 
		inputStr++;
		s2 = *inputStr;      //me
		cout << s1 << " " << s2 << endl;     //hello me
	}
	return 0;
}


//注意事项
//自定义类的对象的符号操作，都是要重载的。
//这里的* 并不是平常的 T* 类型，
//这里的++也并不是int++