#include <stdio.h>
#include <stdlib.h>

#define LIST_INIT_SIZE 100
//#define LISTINCREMENT 10

typedef int Elemtype; //将int作为顺序表的元素默认类型

//构造线性表
typedef struct 
{
	Elemtype* elem;  //存储空间的基址
	int length;  //当前的长度
	int listsize;  //当前分配的存储容量
}SqList;   //将该结构体重命名为SqList（线性表）


//主函数
int main(void) 
{
	void InitList_sq(SqList & L);	//初始化函数 
	void LIST_A(SqList & L, int n);	//顺序表 A构造函数
	void sort_fun(SqList & L, int k);	//排序函数

	SqList L;

	InitList_sq(L);

	int n; //6
	int k; //3
	printf("input n:");
	scanf_s("%d", &n);
	printf("input k:");
	scanf_s("%d", &k);

	LIST_A(L, n);

	printf("\n=====排序前的线性表=====\n");
	int i;
	int count1 = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", L.elem[i]);
		count1++;
		if (count1 % 5 == 0) { printf("\n"); }
		else { printf("  "); }
	}

	sort_fun(L, k);//调用排序函数

	printf("\n=====排序后的线性表=====\n");
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


//初始化函数 
void InitList_sq(SqList& L)
{

	L.elem = (Elemtype*)malloc(LIST_INIT_SIZE * sizeof(Elemtype));  //动态内存分配


	if (!L.elem)
	{
		printf("存储分配失败\n");

		exit(-1);
	}
	L.length = 0;
	L.listsize= LIST_INIT_SIZE;

	//return OK;

}

//顺序表 A构造函数
void LIST_A(SqList& L, int n)
{
	int i;
	L.listsize = LIST_INIT_SIZE;
	L.length = n;

	printf("输入顺序表元素，共%d个\n", n);  //1 3 5 2 4 6

	for (i = 0; i < n; i++)
	{
		printf("%d:", i+1);
		scanf_s("%d", &L.elem[i]);   //顺序表元素输入
	}

}


//排序函数
void sort_fun(SqList& L, int k)
{
	int n = L.length;
	int i;
	int j;
	int temp;
	for (i = k; i < n; i++)  //i指后半部分  //用for循环遍历完第二部分的元素
	{
		//printf("i=%d\n", i);
		temp = L.elem[i];    //space O(1)
		j = i - 1;
		//printf("j=%d\n", j);
		while (j >= 0 && L.elem[j] > temp)   //用while遍历完第二部分的第一个元素与第一部分所有的元素的比较
		{
			L.elem[j + 1] = L.elem[j];
			j--;
			//printf("j=%d\n", j);
		}
		L.elem[j + 1] = temp;
	}
}