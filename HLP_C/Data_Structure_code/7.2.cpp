#include <stdio.h>
#include <stdlib.h>
//#include<limits.h>



#define INF 1000
#define size 100

typedef struct MGraph
{
	int arcs[size][size];   //邻接矩阵

	int vexnum;   //顶点数
	int arcnum;  //弧数
}MGraph;

int main(void)
{
	MGraph CreateGraph();  //函数的返回值是一个结构体
	void Floyd(MGraph G, int dis[size][size]);//floyd 算法：每一对顶点之间的最短距离

	MGraph G;
	G = CreateGraph();

	int dis[size][size] = { 0 };

	Floyd(G, dis);

	return 0;
}

//构建一个图
MGraph CreateGraph()
{
	MGraph G;

	printf("请输入网的顶点的个数：");
	scanf_s("%d", &G.vexnum);  //读入顶点数
	printf("请输入网的弧的个数：");
	scanf_s("%d", &G.arcnum);     //读入hu数

	//printf("%d", INT_MAX);  //2147483647

	int i;
	int j;

	//初始化邻接表，所有结点之间的距离为INF
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			G.arcs[i][j] = INF;
		}
	}

	int count = 1;

	int temp1;
	int temp2;
	int temp3;


	while (count != G.arcnum + 1)
	{
		printf("请输入第%d个弧的相关参数（起点 终点 权重）:", count);

		scanf_s("%d %d %d", &temp1, &temp2, &temp3);

		G.arcs[temp1][temp2] = temp3;

		count++;

	}

	printf("\n邻接表：\n");
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			if (G.arcs[i][j] == INF) { printf("∞\t"); }
			else { printf("%d\t", G.arcs[i][j]); }

			if (j == G.vexnum - 1) { printf("\n"); }
		}
	}


	return G;
}


void Floyd(MGraph G, int dis[size][size])
{
	int i;
	int j;
	int k;

	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			dis[i][j] = G.arcs[i][j];
		}
	}

	for (k = 0; k < G.vexnum; k++)
	{
		for (i = 0; i < G.vexnum; i++)
		{
			for (j = 0; j < G.vexnum; j++)
			{
				if (i == j)
				{
					dis[i][j] = 0;  //i与j是同一个地方，则它们之间的距离为零
				}
				else
				{
					dis[i][j] = dis[i][j] < (dis[i][k] + dis[k][j]) ? dis[i][j] : (dis[i][k] + dis[k][j]);
				}
			}
		}

	}

	printf("任意两点之间的距离数组：\n");
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			printf("%d\t", dis[i][j]);

			if (j == G.vexnum - 1) { printf("\n"); }
		}
	}


	//每一列相加就是其余个点到该点的距离和

	int distance_all[size] = { 0 };

	for(j=0;j<G.vexnum;j++)
	{
		for (i = 0; i < G.vexnum; i++)
		{
			distance_all[j] += dis[i][j];
		}
		printf("到%d村的距离：distance_all[%d]=%d\n", j,j,distance_all[j]);
	}


	int distance_min = 100;
	int flag = 100;
	int ii;
	for (ii = 0; ii < G.vexnum; ii++)
	{
		if (distance_all[ii] < distance_min)
		{
			distance_min = distance_all[ii];
			flag = ii;
		}
	}

	//printf("min=%d,flag=%d", distance_min, flag);
	printf("选择将医院落户于%d村，其代价最小，为%d！", flag, distance_min);
}

