/* 给定一个整型数组，从数组第一个元素开始，按照元素的数值（正数往右跳，负数往左跳）向数组尾部进行跳跃相应的步数。
实现一个判断函数，输出跳跃轨迹，并判断是否能刚好跳到数组最后一个元素。
*/


// 上交OJ可通过

#include <stdio.h>
#include <malloc.h>

void canJump(int* nums, int numsSize) 
{
    int flag = 1;
    int pos = 0;
    int count = 0;
    while (flag)
    {
        printf("%d %d\n", pos, *(nums + pos));
        if (pos == numsSize - 1)
            break;
        if ((pos + *(nums + pos) >= 0) && (pos + *(nums + pos) < numsSize))
        {
            pos += *(nums + pos);
        }
        else
            flag = 0;
            count++;
        if (count > 20)
            flag = 0;
    }

    if (flag)
    printf("yes\n");
    else
    printf("no\n");
}


int main()
{
    int* array;
    int i, j;
    int n = 0;
    scanf("%d", &n);
    array = (int*)malloc(sizeof(int)*n);
    for (i = 0; i < n; i++)
    scanf("%d", array + i);
    canJump(array, n);
}