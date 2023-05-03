//���۰�����㷨�� �����۰�����㷨��һ������� R �в���һ���ؼ���Ϊ k ��Ԫ���룬�����ֱ�������ԡ�

#include<stdio.h>
#include <stdlib.h>




void insertK(int nums[], int n, int k)
{
	int mid; 
	int low = 0;
	int high = n - 1;
	int flag = 0;
	int pos;
	while (low <= high && flag == 0)
	{
		mid = (low + high) / 2;
		if (nums[mid] == k) {
			flag = 1;
		}
		else if (nums[mid] > k) {
			high = mid - 1;
		}
		else if (nums[mid] < k) {
			low = mid + 1;
		}
	}

	if (flag == 1) {
		pos = mid;
	}
	else {
		pos = low;
	}

	for (int i = n - 1; i >= pos; i--) {
		nums[i + 1] = nums[i];
	}
	nums[pos] = k;
}

int main(void)
{
	int* arr = NULL;
	int length;
	printf("���������鳤�ȣ�");
	scanf_s("%d", &length);
	arr=(int*)malloc(sizeof(int)*length);

	if (arr == NULL) {
		printf("�ڴ�����ʧ�ܣ�");
		exit(1);
	}

	printf("����������Ԫ�أ�");
	for (int i = 0; i < length; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("����������Ԫ�أ�");
	int k;
	scanf_s("%d", &k);

	insertK(arr, length, k);



	printf("\n");
	for (int i = 0; i < length+1; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	return 0;
}