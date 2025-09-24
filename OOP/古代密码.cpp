#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main()
{

    string A,B;
    int numA[26], numB[26];

    int temporary, position;

    bool flag;

    cin >> A >> B;

    for (int i = 0; i < 26; i++) {
        numA[i] = 0;
        numB[i] = 0;
    }

    for (string::size_type i = 0; i < A.size(); i++) {
        numA[A[i] - 'A']++;
        numB[B[i] - 'A']++;
    }




    sort(numA, numA + 26, greater<int>());
    sort(numB, numB + 26, greater<int>());

    flag = true;


    for (int i = 0; i < 26; i++) {
        if (numB[i] != numA[i]) {
            flag = false;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}