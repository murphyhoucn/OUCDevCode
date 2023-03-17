#include <stdio.h>
#include <stdlib.h>
//#include<limits.h>



#define INF 1000
#define size 100

typedef struct MGraph
{
	int arcs[size][size];   //�ڽӾ���

	int vexnum;   //������
	int arcnum;  //����
}MGraph;

int main(void)
{
	MGraph CreateGraph();  //�����ķ���ֵ��һ���ṹ��
	void Floyd(MGraph G, int dis[size][size]);//floyd �㷨��ÿһ�Զ���֮�����̾���

	MGraph G;
	G = CreateGraph();

	int dis[size][size] = { 0 };

	Floyd(G, dis);

	return 0;
}

//����һ��ͼ
MGraph CreateGraph()
{
	MGraph G;

	printf("���������Ķ���ĸ�����");
	scanf_s("%d", &G.vexnum);  //���붥����
	printf("���������Ļ��ĸ�����");
	scanf_s("%d", &G.arcnum);     //����hu��

	//printf("%d", INT_MAX);  //2147483647

	int i;
	int j;

	//��ʼ���ڽӱ����н��֮��ľ���ΪINF
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
		printf("�������%d��������ز�������� �յ� Ȩ�أ�:", count);

		scanf_s("%d %d %d", &temp1, &temp2, &temp3);

		G.arcs[temp1][temp2] = temp3;

		count++;

	}

	printf("\n�ڽӱ�\n");
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			if (G.arcs[i][j] == INF) { printf("��\t"); }
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
					dis[i][j] = 0;  //i��j��ͬһ���ط���������֮��ľ���Ϊ��
				}
				else
				{
					dis[i][j] = dis[i][j] < (dis[i][k] + dis[k][j]) ? dis[i][j] : (dis[i][k] + dis[k][j]);
				}
			}
		}

	}

	printf("��������֮��ľ������飺\n");
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
		{
			printf("%d\t", dis[i][j]);

			if (j == G.vexnum - 1) { printf("\n"); }
		}
	}


	//ÿһ����Ӿ���������㵽�õ�ľ����

	int distance_all[size] = { 0 };

	for(j=0;j<G.vexnum;j++)
	{
		for (i = 0; i < G.vexnum; i++)
		{
			distance_all[j] += dis[i][j];
		}
		printf("��%d��ľ��룺distance_all[%d]=%d\n", j,j,distance_all[j]);
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
	printf("ѡ��ҽԺ�仧��%d�壬�������С��Ϊ%d��", flag, distance_min);
}

