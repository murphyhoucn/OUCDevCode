# include <stdio.h>
# define s1 27.0
# define s2 23.0

# define v1 1.2
# define v2 3.0

float bike(int distance)
{
    float time = s1 + s2 + (distance / v2);

    return time;
}


float walk(int distance)
{
    float time = distance / v1;

    return time;
}

int main()
{
    // 在海大校园里,没有自行车,上课办事会很不方便.
    // 但实际上,并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间.

    // 假设找到自行车,开锁并车上自行车的时间为27秒;停车锁车的时间为23秒;
    // 步行每秒行走1.2米,骑车每秒行走3.0米.
    // 请判断走不同的距离去办事,是骑车快还是走路快.


    int num;
    scanf("%d", &num);

    int array[num];

    int i;
    for (i = 0; i < num; i ++)
    {
        scanf("%d", &array[i]);
    }

    // for (i = 0; i < num; i ++)
    // {
    //     printf("测试：%d\n", array[i]);
    // }

    for (i = 0; i < num; i ++)
    {
        if (walk(array[i]) > bike(array[i]))
        {
            printf("Bike\n");
        }
        else if (walk(array[i]) < bike(array[i]))
        {
            printf("Walk\n");
        }
        else
        {
            printf("All\n");
        }
    }

    return 0;
}