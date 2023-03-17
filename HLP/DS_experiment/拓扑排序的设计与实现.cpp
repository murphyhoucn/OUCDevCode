//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 50
//typedef struct ArcNode
//{
//	int adjvex;//弧邻接的顶点
//	char info; //弧相关信息
//	struct ArcNode* nextarc; //指向下一条弧的指针
//}ArcNode;
//typedef struct Vnode
//{
//	char data; //结点信息
//	int inDegree; //入度
//	int OutDegree; //出度
//	ArcNode* link; //指向第一个和该顶点相连的弧
//}Vnode, AdjList[MAX + 1];
//
////图结构体
//	typedef struct
//	{
//		AdjList vertices;
//		int vexnum;//顶点数
//		int arcnum;//边数
//	} ALGraph;
//	void CreateGraph(ALGraph& G)
//	{
//		int i, j, s, d;
//		ArcNode* p;
//		ArcNode* t;
//		//输入结点信息
//		for (i = 1; i <= G.vexnum; i++)
//		{
//			getchar();
//			printf("第%d个结点信息(char型) : ", i);
//			scanf_s("%c", &G.vertices[i].data,100);
//			G.vertices[i].inDegree = 0;
//			G.vertices[i].OutDegree = 0;
//			G.vertices[i].link = NULL;
//		}
//
//		//输入边的信息
//		for (i = 1; i <= G.arcnum;i++)
//		{
//			printf("第%d条边----起点序号,终点序号:", i);
//			scanf_s("%d %d", &s, &d);
//			p = (ArcNode*)malloc(sizeof(ArcNode));
//			p->adjvex = d;
//			p->info = G.vertices[d].data; // 存储边的权值等信息，此处以顶点数据代替
//			p->nextarc = G.vertices[s].link;// p插入顶点s的邻接表中
//			G.vertices[s].link = p;
//		}
//		//计算顶点的入度
//		for (i = 1; i <= G.vexnum;i++)
//		{
//			int counter = 0;
//			for (j = 1; j <= G.vexnum;j++) //求顶点i的入度要遍历整个邻接表
//			{
//				if (j != i)// 顶点i的邻接链表不必计算
//				{
//					t = G.vertices[j].link;// 取顶点i的邻接表
//					while (t)//遍历整个邻接表
//					{
//						if (t->adjvex == i)
//							counter++;
//						t = t->nextarc;
//					}
//				}
//			}
//			G.vertices[i].inDegree = counter;
//		}
//	}
//void OutputGraph(ALGraph& G)
//{
//	int i;
//	ArcNode* p;
//printf("遍历图的结果如下: \n");
//for (i = 1; i <= G.vexnum;i++)
//{
//	printf("[%c(%d)]", G.vertices[i].data, G.vertices[i].inDegree);
//	p = G.vertices[i].link;
//	while (p != NULL)
//	{
//		printf("—―->(%d %c)", p->adjvex, p->info);
//		p = p->nextarc;
//	}
//	printf("\n");
//}
//}
//void Toposort(ALGraph& G)
//{
//	int i, j, k;
//	ArcNode* p;
//	int qhead = 0;//qhead是入度为0的顶点链表的头指针
//	int m = 0; // m指示输出的顶点个数
//	for (i = 1; i <= G.vexnum; i++)//建立入度为0的顶点链表
//	{
//		if (G.vertices[i].inDegree == 0)
//		{
//			G.vertices[i].inDegree = qhead;
//			qhead = i;
//			while (qhead != 0)
//			{
//				j = qhead;
//
//				//在链表中删除入度为0的顶点,顶点序号为j
//				qhead = G.vertices[i].inDegree;
//				p = G.vertices[j].link;
//				printf("%c ", j);//输出顶点j并计数
//				m++;
//				while (p != NULL)
//				{
//					k = p->adjvex;
//
//
//					// 以顶点k 为尾的弧头的入度减1
//					G.vertices[k].inDegree = G.vertices[k].inDegree - 1;
//					if (G.vertices[k].inDegree == 0)
//					{
//						G.vertices[k].inDegree = qhead;//新顶点入链，入度为0
//						p = p->nextarc;//找下一条弧
//					}
//				}
//			}
//		}
//	}
//	if (m < G.vexnum)
//		printf("网中有环!\n");//输出顶点数不是n
//}
//int main()
//{
//	ALGraph G;
//	printf("输入结点数和边数:");
//	scanf_s("%d %d", &G.vexnum, &G.arcnum);
//	CreateGraph(G);
//	Toposort(G);
//	OutputGraph(G);
//	return 0;
//}
