// exp6 assignment2
// 细菌实验分组

# include <iostream>
using namespace std;

void bubble(int *arraybianhao, float *arrayfanzhilv, int n);

int main()
{
    int n;
    cin >> n;

    int bianhao[100];
    int shiyanqian[100];
    int shiyanhou[100];

    float fanzhilv[100];

    for (int i = 0; i < n; i++)
    {
        cin >> bianhao[i] >> shiyanqian[i] >> shiyanhou[i];
        fanzhilv[i] = (float) shiyanhou[i] / shiyanqian[i];
    }

    // 根据繁殖率大小，对编号和繁殖率进行排序。 繁殖率强的在前，繁殖率弱的在后
    bubble(bianhao, fanzhilv, n);

    float fanzhilvmax = fanzhilv[0];  // A强 B弱
    float fanzhilvmin = fanzhilv[n - 1];

    int Anum = 0;
    int Bnum = 0;

    for (int i = 0; i < n; i++)
    {
        if (fanzhilv[i] - fanzhilvmin < fanzhilvmax - fanzhilv[i])
        {
            Bnum++;
        }
        else
        {
            Anum++;
        }
    }

    cout << Anum << endl;
    for(int i = Anum - 1; i > -1 ; i--)
    {
        cout << bianhao[i] << endl;
    }

    cout << Bnum << endl;
    for(int i = n - 1; i > Anum -1; i--)
    {
        cout << bianhao[i] << endl;
    }

    return 0;
}

void bubble(int *arraybianhao, float *arrayfanzhilv, int n)
{
    int bianhaotmp;
    int fanzhilvtmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arrayfanzhilv[j] > arrayfanzhilv[j - 1])
            {
                bianhaotmp = arraybianhao[j];
                arraybianhao[j] = arraybianhao[j - 1];
                arraybianhao[j - 1] = bianhaotmp;

                fanzhilvtmp = arrayfanzhilv[j];
                arrayfanzhilv[j] = arrayfanzhilv[j - 1];
                arrayfanzhilv[j - 1] = fanzhilvtmp;
            }
        }
    }
}