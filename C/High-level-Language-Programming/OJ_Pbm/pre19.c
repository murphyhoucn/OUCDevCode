# include <stdio.h>

// 有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，
// A亚种繁殖能力非常强，B亚种的繁殖能力很弱。
// 在一次为时一个 小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，
// 请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。


// 输入有多行，第一行为整数n（n≤100），表示有n个培养皿。
// 其余n行，每行有三个整数，
// 分别代表培养皿编号，试验前细菌数量，试验后细菌数量。


// 输出有多行：
// 第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。
// 然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。

void bubble(int *arraybianhao, float *arrayfanzhilv, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int bianhao[100];
    int shiyanqian[100];
    int shiyanhou[100];

    float fanzhilv[100];
    int i;
    for (i = 0;i < n; i++)
    {
        scanf("%d %d %d", &bianhao[i], &shiyanqian[i], &shiyanhou[i]);
        fanzhilv[i] = (float) shiyanhou[i] / shiyanqian[i];
    }

    // for (i = 0;i < n; i++)
    // {
    //     printf("paixuqian:ceshi:%d %d %d %f \n", bianhao[i], shiyanqian[i], shiyanhou[i], fanzhilv[i]);
    // }


    bubble(bianhao, fanzhilv, n);

    // for (i = 0;i < n; i++)
    // {
    //     printf("paixuhou:ceshi:%d %d %d %f \n", bianhao[i], shiyanqian[i], shiyanhou[i], fanzhilv[i]);
    // }


    float fanzhilvmax = fanzhilv[0];
    float fanzhilvmin = fanzhilv[n - 1];

    // printf("ceshi:max = %f\n", fanzhilvmax);
    // printf("ceshi:min = %f\n", fanzhilvmin);


    // A.B 亚种的数量。
    // A 强
    // B 弱
    int Anum = 0;
    int Bnum = 0;

    for (i = 0; i < n; i++){
        if (fanzhilv[i] - fanzhilvmin < fanzhilvmax - fanzhilv[i]){
            Bnum++;
        }
        else{
            Anum++;
        }
    }


    // printf("A:%d\n", Anum);
    // printf("B:%d\n", Bnum);
    


    printf("%d\n", Anum);
    for (i = Anum - 1; i > -1; i--){
        printf("%d\n", bianhao[i]);
    }

    printf("%d\n", Bnum);
    for (i = n - 1; i > Anum - 1; i--){
        printf("%d\n", bianhao[i]);
    }

    return 0;
}




void bubble(int *arraybianhao, float *arrayfanzhilv, int n)
{
    int i, j;
    int bianhaotmp;
    float fanzhilvtmp;

    // printf("hanshu ceshi: %d\n", n);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (arrayfanzhilv[j - 1] < arrayfanzhilv[j])
            {
                fanzhilvtmp = arrayfanzhilv[j - 1];
                arrayfanzhilv[j - 1] = arrayfanzhilv[j];
                arrayfanzhilv[j] = fanzhilvtmp;

                bianhaotmp = arraybianhao[j - 1];
                arraybianhao[j - 1] = arraybianhao[j];
                arraybianhao[j] = bianhaotmp;
            }
        }
    }
}