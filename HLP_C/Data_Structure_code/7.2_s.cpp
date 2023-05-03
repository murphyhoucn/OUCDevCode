//#include <stdio.h>
//#include <stdlib.h>
//
//#define MaxVertexNum 100
//#define INFINITY 65535
//
//typedef int DistType;
//typedef int Vertex;
//typedef int WeightType;     //�ߵ�Ȩֵ��Ϊ����
//typedef char DataType;      //��������ݴ洢
//typedef int ElementType;
//
////�ߵĶ���
//typedef struct ENode
//{
//	Vertex V1, V2;       //�ߵ���������
//	WeightType Weight;   //�ߵ�Ȩ��
//}*Edge;
//
////ͼ�Ľ�㶨��
//typedef struct GNode
//{
//	int Nv;         //������
//	int Ne;         //����
//	WeightType Weight[MaxVertexNum][MaxVertexNum];   //�ڽӾ���
//	DataType Data[MaxVertexNum];     //�涥�������
//}*MGraph;
//
////��ʼ��һ��ͼ
//MGraph CreateGraph(int VertexNum)
//{
//	//��ʼ��һ����VertexNum����㵫û�бߵ�ͼ
//	Vertex V, W;
//	MGraph Graph;
//
//	Graph = (MGraph)malloc(sizeof(GNode));  //����ͼ
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;
//
//	//��ʼ���ڽӾ���,��Ȩ����Ϊ��
//	for (V = 0; V <= Graph->Nv; V++)
//		for (W = 0; W <= Graph->Nv; W++)
//			Graph->Weight[V][W] = INFINITY;
//
//	return Graph;
//}
//
////�ߵĲ���
//void InsertEdge(MGraph Graph, Edge E)
//{
//	Graph->Weight[E->V1][E->V2] = E->Weight;
//	Graph->Weight[E->V2][E->V1] = E->Weight;
//}
//
////����һ��ͼ
//MGraph BuildGraph()
//{
//	MGraph Graph;
//	Edge E;
//	//Vertex V;
//	int Nv, i;
//
//	scanf_s("%d", &Nv);      //���붥�����
//	Graph = CreateGraph(Nv);  //��ʼ��һ����VertexNum����㵫û�бߵ�ͼ
//
//	scanf_s("%d", &(Graph->Ne));  //�������
//	if (Graph->Ne != 0)         //����б�
//	{
//		E = (Edge)malloc(sizeof(ENode));  //�����߽��
//										  //����ߣ���ʽΪ����㡱�����յ㡱����Ȩ�ء�
//		for (i = 0; i < Graph->Ne; i++)
//		{
//			scanf_s("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertEdge(Graph, E);   //�����
//		}
//	}
//
//	return Graph;
//}
//
//typedef struct TableNode
//{
//	int Known;
//	DistType Distence;
//	Vertex Path;
//}Table;
//
//
//void InitTable(MGraph Graph, Table* T)
//{
//	int i;
//	for (i = 0; i <= Graph->Nv; i++)
//	{
//		T[i].Distence = INFINITY;
//		T[i].Known = 0;
//		T[i].Path = 0;
//	}
//}
//
//Vertex FindMinDist(MGraph Graph, Table* T)
//{
//	Vertex MinV, V;
//	int MinDist = INFINITY;
//
//	for (V = 0; V <= Graph->Nv; V++)
//	{
//		if (T[V].Known == 0 && T[V].Distence < MinDist)
//		{
//			MinDist = T[V].Distence;
//			MinV = V;
//		}
//	}
//	if (MinDist < INFINITY)
//		return MinV;
//	else
//		return -1;
//}
//
//void Dijkstra(MGraph Graph, Table* T)
//{
//	Vertex V, W;
//	for (;;)
//	{
//		V = FindMinDist(Graph, T);
//		if (V == -1)
//			break;
//		T[V].Known = 1;
//		for (W = 0; W <= Graph->Nv; W++)
//		{
//			if (Graph->Weight[V][W] != INFINITY && T[W].Known == 0)
//				if (T[V].Distence + Graph->Weight[V][W] < T[W].Distence)
//				{
//					T[W].Distence = T[V].Distence + Graph->Weight[V][W];
//					T[W].Path = V;
//				}
//		}
//	}
//}
//
//void FindMaxPath(MGraph Graph, Table* T, int* MaxPath)
//{
//	Vertex V;
//	static int i = 0;
//	int Max = 0;
//	for (V = 0; V < Graph->Nv; V++)
//	{
//		if (T[V].Distence > Max)
//			Max = T[V].Distence;
//	}
//	MaxPath[i++] = Max;
//}
//
//void FindTotalPath(MGraph Graph, Table* T, int* TotalPath)
//{
//	Vertex V;
//	static int i = 0;
//	TotalPath[i] = 0;
//	for (V = 0; V < Graph->Nv; V++)
//		TotalPath[i] += T[V].Distence;
//	i++;
//}
//
//Vertex FindMin(int* A, int N)
//{
//	int i, Min = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (A[i] < A[Min])
//			Min = i;
//	}
//	return Min;
//}
//int main()
//{
//	MGraph Graph = BuildGraph();
//	Table T[MaxVertexNum];
//	Vertex V, W;
//	int MaxPath[MaxVertexNum], TotalPath[MaxVertexNum];
//	for (V = 0; V < Graph->Nv; V++)
//	{
//		InitTable(Graph, T);
//		T[V].Distence = 0;
//		Dijkstra(Graph, T);
//		FindMaxPath(Graph, T, MaxPath);
//		FindTotalPath(Graph, T, TotalPath);
//	}
//	V = FindMin(MaxPath, Graph->Nv);
//	W = FindMin(TotalPath, Graph->Nv);
//
//	printf("ҽԺӦ����%d��ׯ������ҽԺ��Զ�Ĵ�ׯ��ҽԺ��·����̡�\n", V);
//	printf("ҽԺӦ����%d��ׯ���������д�ׯ��ҽԺ��·���ܺ���̡�\n", W);
//}
