#include <iostream>
#include <string>

using namespace std;
template <class T>
class CMyistream_iterator
{
	// �ڴ˴�������Ĵ���
	//����inputInt 
	istream& r;            //cin�� ��Ա 
	T s;
public:
	//	 n1 = * inputInt; //���� n1         // 79 ����n1�����͡�����T 
	T operator *() {    //*�������� ������ǰ����ʽ 
						//* inputInt�൱�� inputInt.operator *() 
		return s;	     //�õ�v 
	}
	CMyistream_iterator(istream& rr) :r(rr) {   //���캯�� //����r���� 
		r >> s;                        //r��v�� 
	}
	void operator ++ (int) {      //����++ 
								//������ʽ����������int���� 
		r >> s;               //inputInt ++ �ȼ��� inputInt.operator ++(0) 
	}
	//
};
int main()
{
	int t;
	cin >> t;       //T�����ݣ�ÿ��3������+2���ַ��� 
	while (t--) {
		CMyistream_iterator<int> inputInt(cin);     //Ci���� inputInt 
		int n1, n2, n3;
		n1 = *inputInt; //���� n1         // 79
		int tmp = *inputInt;
		cout << tmp << endl;        //79 
		inputInt++;              //inpuntInt ����+1 
		n2 = *inputInt; //���� n2        //90 
		inputInt++;
		n3 = *inputInt; //���� n3              //20 
		cout << n1 << " " << n2 << " " << n3 << " ";          //79 90 20 
		CMyistream_iterator<string> inputStr(cin);   //string ģ�� 
		string s1, s2;
		s1 = *inputStr;            //hello 
		inputStr++;
		s2 = *inputStr;      //me
		cout << s1 << " " << s2 << endl;     //hello me
	}
	return 0;
}


//ע������
//�Զ�����Ķ���ķ��Ų���������Ҫ���صġ�
//�����* ������ƽ���� T* ���ͣ�
//�����++Ҳ������int++