
#include <iostream>
#include <string.h>
using namespace std;

const int NUM = 1005;

char A[NUM];
char dest[NUM];

int main()
{
    int i, j, k, temp;
    while (cin >> A)
    {
        k = 0;
        memset(dest, 0, sizeof(dest));

        int len =strlen(A);

        for (i = len - 1; i > 1; i--)
        {
            int num = A[i] - '0';

            for (j = 0; j < k || num != 0; j++)
            {
                temp = 10 * num + (j < k ? dest[j] - '0' : 0);
                dest[j] = temp / 8 + '0';
                num = temp % 8;
            }

            k = j;
        }
        
        cout << A << " [8] = 0." << dest << " [10]" << endl;
    }
    return 0;
}
