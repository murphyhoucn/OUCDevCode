//#include <stdio.h>
//#include <stdlib.h>
//
//#define MaxVertexNum 100
//#define INFINITY 65535
//
//typedef int DistType;
//typedef int Vertex;
//typedef int WeightType;     //边的权值设为整数
//typedef char DataType;      //顶点的数据存储
//typedef int ElementType;
//
////边的定义
//typedef struct ENode
//{
//	Vertex V1, V2;       //边的两个顶点
//	WeightType Weight;   //边的权重
//}*Edge;
//
////图的结点定义
//typedef struct GNode
//{
//	int Nv;         //顶点数
//	int Ne;         //边数
//	WeightType Weight[MaxVertexNum][MaxVertexNum];   //邻接矩阵
//	DataType Data[MaxVertexNum];     //存顶点的数据
//}*MGraph;
//
////初始化一个图
//MGraph CreateGraph(int VertexNum)
//{
//	//初始化一个有VertexNum个结点但没有边的图
//	Vertex V, W;
//	MGraph Graph;
//
//	Graph = (MGraph)malloc(sizeof(GNode));  //建立图
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;
//
//	//初始化邻接矩阵,将权重置为∞
//	for (V = 0; V <= Graph->Nv; V++)
//		for (W = 0; W <= Graph->Nv; W++)
//			Graph->Weight[V][W] = INFINITY;
//
//	return Graph;
//}
//
////边的插入
//void InsertEdge(MGraph Graph, Edge E)
//{
//	Graph->Weight[E->V1][E->V2] = E->Weight;
//	Graph->Weight[E->V2][E->V1] = E->Weight;
//}
//
////构建一个图
//MGraph BuildGraph()
//{
//	MGraph Graph;
//	Edge E;
//	//Vertex V;
//	int Nv, i;
//
//	scanf_s("%d", &Nv);      //读入顶点个数
//	Graph = CreateGraph(Nv);  //初始化一个有VertexNum个结点但没有边的图
//
//	scanf_s("%d", &(Graph->Ne));  //读入边数
//	if (Graph->Ne != 0)         //如果有边
//	{
//		E = (Edge)malloc(sizeof(ENode));  //建立边结点
//										  //读入边，格式为“起点”，“终点”，“权重”
//		for (i = 0; i < Graph->Ne; i++)
//		{
//			scanf_s("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			InsertEdge(Graph, E);   //插入边
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
//	printf("医院应建在%d村庄，距离医院最远的村庄到医院的路程最短。\n", V);
//	printf("医院应建在%d村庄，其它所有村庄到医院的路径总和最短。\n", W);
//}
