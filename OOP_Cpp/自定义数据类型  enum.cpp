#include <iostream>
using namespace std;

enum gameresult { win, lose, tie, cancle };

int main()

{
	enum gameresult result;        //enum д��д����
	enum gameresult omit = cancle;

	for (int count = win; count <= cancle; count++)    //ö�����ͺ�int��������ת��
	{
		result = (gameresult)count;

		if (result == omit)
			cout << "cancle" << endl;
		else {
			cout << "played and ";
			if (result == win)
				cout << "win" << endl;
			else if (result == tie)
				cout << "tie" << endl;
			else
				cout << "lose" << endl;
		}
			

	
	}
	return 0;
}