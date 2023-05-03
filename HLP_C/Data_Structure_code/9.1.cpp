//1 �������������⡿��һ���� n ���ַ������� A[n]����ŵ��ַ�ֻ�� 3 �֣�R����ɫ����W����ɫ���� B����ɫ����
//���һ���㷨���·����ַ��������е� R��������ǰ�棬W �������м䣬B ���������Ҫ��ÿ���ַ�ֻ����һ��


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
