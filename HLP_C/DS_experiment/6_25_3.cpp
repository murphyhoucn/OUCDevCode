#include<stdio.h>
#define MAX 50

void InputData(int list[], int n)
{
    printf("input data : \n");
    for (int i = 0; i < n; i++)
        scanf_s("%d", &list[i]);
}
void OutputData(int list[], int n)
{
    printf("\nthe current soring is:");
    for (int k = 0; k < n; k++)
        printf(" %d", list[k]);
}

void SelectSort(int list[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[k])  k = j;
            temp = list[i];
            list[i] = list[k];
            list[k] = temp;
        }
        OutputData(list, n);
    }
}

void main()
{
    int num;
    int list[MAX];
    printf("input length of the list(n<50):\n");
    scanf_s("%d", &num);

    InputData(list, num);
    SelectSort(list, num);
}