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
////typedef int ElemType;
//
//typedef struct
//{
//	int* elem;
//	int length;
//	int listsize;
//
//} Sq_List;
//
//int Sq_ListInit(Sq_List& L)
//{
//	L.elem = (int*)malloc(List_INIT_SPACE * sizeof(int));
//
//	if (!L.elem) { exit(OVERFLOW); }
//
//	L.length = 0;
//	L.listsize = List_INC_SPACE;
//	return OK;
//
//}
//
//int Sq_ListInsert(Sq_List& L, int i, int e)
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
//		newspace = (int*)realloc(L.elem, (L.listsize + List_INC_SPACE) * sizeof(int));
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
//	for (p = &(L.elem[L.length - 1]); p >= q; --p)
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
//
//void PrintList(Sq_List L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("%d ", *L.elem++);
//	}
//
//	printf("\n");
//
//
//}
//
//void Sq_ListMerge(Sq_List La, Sq_List Lb, Sq_List& Lc)
//{
//	int* pa, * pb, * pc;
//	int* qa, * qb;
//	pa = La.elem;
//	pb = Lb.elem;
//	qa = La.elem + La.length - 1;
//	qb = Lb.elem + Lb.length - 1;
//
//	Lc.listsize = Lc.length = La.length + Lb.length;
//	pc = Lc.elem = (int*)malloc(Lc.listsize * sizeof(int));
//
//	if (!Lc.elem) { exit(OVERFLOW); }
//
//	while (pa <= qa && pb <= qb)
//	{
//		if (*pa <= *pb) { *pc++ = *pa++; }
//		else { *pc++ = *pb++; }
//	}
//
//	while (pa<=qa){ *pc++ = *pa++; }
//	while (pb <= qb) { *pc++ = *pb++; }
//
//}
//int main(void)
//{
//	Sq_List La,Lb,Lc;
//
//	if (Sq_ListInit(La))
//	{
//		Sq_ListInsert(La, 1, 3);
//		Sq_ListInsert(La, 2, 5);
//		Sq_ListInsert(La, 3, 8);
//		Sq_ListInsert(La, 4, 11);
//		//printf("LA:hello\n");
//		PrintList(La);
//
//	}
//	else { printf("create failed!\n"); }
//
//	if (Sq_ListInit(Lb))
//	{
//		Sq_ListInsert(Lb, 1, 2);
//		Sq_ListInsert(Lb, 2, 6);
//		Sq_ListInsert(Lb, 3, 8);
//		Sq_ListInsert(Lb, 4, 9);
//		Sq_ListInsert(Lb, 5, 11);
//		Sq_ListInsert(Lb, 6, 15);
//		//printf("LB:hello\n");
//		PrintList(Lb);
//	}
//	else { printf("create failed!\n"); }
//
//
//	Sq_ListMerge(La, Lb, Lc);
//
//	//printf("LC:hello\n");
//	PrintList(Lc);
//
//	return 0;
//}