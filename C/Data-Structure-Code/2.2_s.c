#include<stdio.h>
#include<stdlib.h>
const int ListSize = 100;
typedef int Elemtype;
typedef struct {
	Elemtype* data;		//顺序表的基地址
	int length; 		//顺序表的长度 
	int listsize;
}SqList;
void InitList(SqList& L) {		//初始化 

	L.data = (Elemtype*)malloc(ListSize * sizeof(Elemtype));
	if (L.data == NULL) {
		printf("存储分配失败！\n");
		exit(1);
	}
	L.length = 0;
}
void creatlist(SqList& L, int n) {		//创建 
	int i;
	L.listsize = ListSize;
	L.length = n;
	printf("Input %d data:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &L.data[i]);
}

void sortList(SqList& L, int k) {     //排序 
	int n = L.length;
	int i, j;
	for (i = k; i < n; i++) {
		int temp = L.data[i];
		j = i - 1;
		while (j >= 0 && L.data[j] > temp) {
			L.data[j + 1] = L.data[j];
			--j;
		}
		L.data[j + 1] = temp;
	}
}

void printList(SqList& L, int n) {    //输出打印 
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", L.data[i]);
	printf("\n");
}
int main() {
	SqList L;

	InitList(L);
	int n;
	int k;
	printf("Input n and k:\n");
	scanf_s("%d%d", &n, &k);
	creatlist(L, n);
	sortList(L, k);
	printf("排序后的线性表为：\n");
	printList(L, n);
	return 0;
}
