# include <stdio.h>

int main()
{
    int total_width, total_height;
    // 5               3
    int lie, hang, corpped_width, cropped_height;
    //   1,   0      3                  1

    scanf("%d%d", &total_width, &total_height);
    scanf("%d%d%d%d", &lie, &hang, &corpped_width, &cropped_height);

    int array[total_height][total_width];

    // printf("%d %d\n", total_width, total_height);
    // printf("%d %d %d %d\n", lie, hang, corpped_width, cropped_height);

    // 输入二维矩阵
    for (int i = 0; i < total_height; i++)
    {
        for(int j = 0; j < total_width; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // 输出裁切矩阵
    for (int i = hang; i < hang + cropped_height; i++)
    {
        for(int j = lie; j < lie + corpped_width; j++)
        {
            printf("%d", array[i][j]);
            if (j < lie + corpped_width - 1) {printf(" ");}
        }
        if (i < hang + cropped_height - 1){printf("\n");}
    }

    // for (int i = 0; i < total_height; i++)
    // {
    //     for(int j = 0; j < total_width; j++)
    //     {
    //         printf("%d ", array[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
    
}