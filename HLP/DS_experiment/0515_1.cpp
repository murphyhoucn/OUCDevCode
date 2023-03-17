//#include <stdio.h>
//#include <stdlib.h>
//
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -1
//
//#define List_INIT_SPACE 100
//#define List_INC_SPACE 10
//
//typedef int ElemType;
//
//typedef struct
//{
//	ElemType* elem;
//	int length;
//	int listsize;
//
//} Sq_List;
//
//int Sq_ListInit(Sq_List& L)
//{
//	L.elem = (ElemType*)malloc(List_INIT_SPACE * sizeof(ElemType));
//
//	if (!L.elem) { exit(OVERFLOW); }
//
//	L.length = 0;
//	L.listsize = List_INC_SPACE;
//	return OK;
//
//}
//
//int LocateElem(Sq_List L, int e)
//{
//	int i = 1;
//	int* p = L.elem;
//	while (i < L.length && *p != e) { ++i; }
//	if (i < L.length) { return i; }
//	else { return ERROR; }
//}
//
//int GetListLength(Sq_List L)
//{
//	return L.length;
//}
//
//int Sq_ListInsert(Sq_List& L, int i, ElemType e)
//{
//	if (i<1 || i>L.length + 1)
//	{
//		printf("i的值不合法！\n");
//		return 0;
//
//	}
//
//	if (L.length >= L.listsize)
//	{
//		int* newspace;
//		newspace = (ElemType*)realloc(L.elem, (L.listsize + List_INC_SPACE) * sizeof(ElemType));
//
//		if (!newspace) { exit(OVERFLOW); }
//		L.elem = newspace;
//		L.listsize += List_INC_SPACE;
//	}
//
//
//	int* p;
//	int* q;
//	q = &(L.elem[i - 1]);
//	for (p=&(L.elem[L.length-1]);p>=q;--p)
//	{
//		*(p + 1) = *p;
//	}
//
//	*q = e;
//	++L.length;
//	return OK;
//
//}
//
//int Sq_ListDelete(Sq_List& L, int i, ElemType& e)
//{
//	if (i<1 || i>L.length + 1)
//	{
//		printf("i的值不合法\n");
//		return 0;
//	}
//
//	int* p, * q;
//	p = &(L.elem[i - 1]);
//	e = *p;
//	q = L.elem + L.length - 1;
//	for (++p; p <= q; ++p)
//	{
//		*(p - 1) = *p;
//	}
//
//	--L.length;
//	return OK;
//}
//int main(void)
//{
//	Sq_List R;
//	int flag;
//	flag = Sq_ListInit(R);
//
//	int i = 1;
//	int elem;
//
//	printf("the length of current list is %d \n", GetListLength(R));
//
//	printf("input the element:");
//	scanf_s("%d", &elem);
//	if (Sq_ListInsert(R, i, elem))
//	{
//		printf("succeed\n");
//	}
//
//	printf("the length of current List is %d \n", GetListLength(R));
//
//
//	return 0;
//}