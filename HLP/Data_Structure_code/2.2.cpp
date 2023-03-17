#include <stdio.h>
#include <stdlib.h>

#define LIST_INIT_SIZE 100
//#define LISTINCREMENT 10

typedef int Elemtype; //��int��Ϊ˳����Ԫ��Ĭ������

//�������Ա�
typedef struct 
{
	Elemtype* elem;  //�洢�ռ�Ļ�ַ
	int length;  //��ǰ�ĳ���
	int listsize;  //��ǰ����Ĵ洢����
}SqList;   //���ýṹ��������ΪSqList�����Ա�


//������
int main(void) 
{
	void InitList_sq(SqList & L);	//��ʼ������ 
	void LIST_A(SqList & L, int n);	//˳��� A���캯��
	void sort_fun(SqList & L, int k);	//������

	SqList L;

	InitList_sq(L);

	int n; //6
	int k; //3
	printf("input n:");
	scanf_s("%d", &n);
	printf("input k:");
	scanf_s("%d", &k);

	LIST_A(L, n);

	printf("\n=====����ǰ�����Ա�=====\n");
	int i;
	int count1 = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", L.elem[i]);
		count1++;
		if (count1 % 5 == 0) { printf("\n"); }
		else { printf("  "); }
	}

	sort_fun(L, k);//����������

	printf("\n=====���������Ա�=====\n");
	int count2 = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", L.elem[i]);
		count2++;
		if (count2 % 5 == 0) { printf("\n"); }
		else { printf("  "); }
	}

	return 0;
}


//��ʼ������ 
void InitList_sq(SqList& L)
{

	L.elem = (Elemtype*)malloc(LIST_INIT_SIZE * sizeof(Elemtype));  //��̬�ڴ����


	if (!L.elem)
	{
		printf("�洢����ʧ��\n");

		exit(-1);
	}
	L.length = 0;
	L.listsize= LIST_INIT_SIZE;

	//return OK;

}

//˳��� A���캯��
void LIST_A(SqList& L, int n)
{
	int i;
	L.listsize = LIST_INIT_SIZE;
	L.length = n;

	printf("����˳���Ԫ�أ���%d��\n", n);  //1 3 5 2 4 6

	for (i = 0; i < n; i++)
	{
		printf("%d:", i+1);
		scanf_s("%d", &L.elem[i]);   //˳���Ԫ������
	}

}


//������
void sort_fun(SqList& L, int k)
{
	int n = L.length;
	int i;
	int j;
	int temp;
	for (i = k; i < n; i++)  //iָ��벿��  //��forѭ��������ڶ����ֵ�Ԫ��
	{
		//printf("i=%d\n", i);
		temp = L.elem[i];    //space O(1)
		j = i - 1;
		//printf("j=%d\n", j);
		while (j >= 0 && L.elem[j] > temp)   //��while������ڶ����ֵĵ�һ��Ԫ�����һ�������е�Ԫ�صıȽ�
		{
			L.elem[j + 1] = L.elem[j];
			j--;
			//printf("j=%d\n", j);
		}
		L.elem[j + 1] = temp;
	}
}