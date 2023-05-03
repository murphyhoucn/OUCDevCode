#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码

class Student 
{
private:
    char name[10];
    char id[5];
public:
    char Print();

};
int main()
{
    int t;
    cin >> t;
    Student s("Tom", 12);
    while (t--) {
        int n;
        cin >> n;
        Student st;
        for (int i = 0; i < n; ++i) {
            st.Read();
            st.Print();
        }
        cout << "****" << endl;
    }
    return 0;
}