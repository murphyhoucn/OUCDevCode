// exp5 assignment1
// 冒泡排序
# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            int tmp;
            if (array[j - 1] > array[j])
            {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }



    for(int i = 0; i < n; i++)
    {
        cout << array[i] << endl;;
    }

    return 0;
}