#include <iostream>
using namespace std;

enum gameresult { win, lose, tie, cancle };

int main()

{
	enum gameresult result;        //enum 写不写都可
	enum gameresult omit = cancle;

	for (int count = win; count <= cancle; count++)    //枚举类型和int类型隐含转化
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