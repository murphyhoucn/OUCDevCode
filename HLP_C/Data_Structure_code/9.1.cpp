//1 【荷兰国旗问题】设一个有 n 个字符的数组 A[n]，存放的字符只有 3 种：R（红色）、W（白色）和 B（蓝色）。
//设计一个算法重新放置字符，让所有的 R排列在最前面，W 排列在中间，B 排列在最后。要求每个字符只访问一次


//R(82):1(49)
//W(87):2(50)
//B(66):3(51)


#include <stdio.h>
#include <stdlib.h>

void out(int a[], int n);
void RWB(int a[], int n);

int main(void)
{

	int* arr = NULL;
	int length;
	printf("请输入数组长度：");
	scanf_s("%d", &length);
	arr=(int*)malloc(sizeof(int)*length);

	if (arr == NULL) {
	printf("内存申请失败！");
	exit(1);
	}

	printf("请输入数组元素：");
	for (int i = 0; i < length; i++) {
	scanf_s("%d", &arr[i]);
	}

	RWB(arr, length);

	int j;
	int temp;
	for (j = 0; j < length; j++)
	{
		temp = arr[j];

		switch (temp)
		{
		case 1:
			printf("R");
			break;
		case 2:
			printf("W");
			break;
		case 3:
			printf("B");
			break;
		default:
			printf("error");
		}

		printf("\t");		
	}


	return 0;
}


void RWB(int a[], int n)
{
	int f, l;
	int x;
	int i = 0;
	f = -1, l = n;
	while (i != l) {
		if (a[i] == 1) {
			f++;
			x = a[i];
			a[i] = a[f];
			a[f] = x;
			i++;
		}
		else if (a[i] == 2) {
			i++;
		}
		else if (a[i] == 3) {
			l--;
			x = a[i];
			a[i] = a[l];
			a[l] = x;
		}
	}
}
