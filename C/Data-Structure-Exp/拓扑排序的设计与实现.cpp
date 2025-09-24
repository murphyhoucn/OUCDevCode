#include <stdio.h>
#include <stdlib.h>
#define MAX 50
typedef struct ArcNode
{
	int adjvex;//���ڽӵĶ���
	char info; //�������Ϣ
	struct ArcNode* nextarc; //ָ����һ������ָ��
}ArcNode;
typedef struct Vnode
{
	char data; //�����Ϣ
	int inDegree; //���
	int OutDegree; //����
	ArcNode* link; //ָ���һ���͸ö��������Ļ�
}Vnode, AdjList[MAX + 1];

//ͼ�ṹ��
	typedef struct
	{
		AdjList vertices;
		int vexnum;//������
		int arcnum;//����
	} ALGraph;
	void CreateGraph(ALGraph& G)
	{
		int i, j, s, d;
		ArcNode* p;
		ArcNode* t;
		//��������Ϣ
		for (i = 1; i <= G.vexnum; i++)
		{
			getchar();
			printf("��%d�������Ϣ(char��) : ", i);
			scanf_s("%c", &G.vertices[i].data,100);
			G.vertices[i].inDegree = 0;
			G.vertices[i].OutDegree = 0;
			G.vertices[i].link = NULL;
		}

		//����ߵ���Ϣ
		for (i = 1; i <= G.arcnum;i++)
		{
			printf("��%d����----������,�յ����:", i);
			scanf_s("%d %d", &s, &d);
			p = (ArcNode*)malloc(sizeof(ArcNode));
			p->adjvex = d;
			p->info = G.vertices[d].data; // �洢�ߵ�Ȩֵ����Ϣ���˴��Զ������ݴ���
			p->nextarc = G.vertices[s].link;// p���붥��s���ڽӱ���
			G.vertices[s].link = p;
		}
		//���㶥������
		for (i = 1; i <= G.vexnum;i++)
		{
			int counter = 0;
			for (j = 1; j <= G.vexnum;j++) //�󶥵�i�����Ҫ���������ڽӱ�
			{
				if (j != i)// ����i���ڽ��������ؼ���
				{
					t = G.vertices[j].link;// ȡ����i���ڽӱ�
					while (t)//���������ڽӱ�
					{
						if (t->adjvex == i)
							counter++;
						t = t->nextarc;
					}
				}
			}
			G.vertices[i].inDegree = counter;
		}
	}
void OutputGraph(ALGraph& G)
{
	int i;
	ArcNode* p;
printf("����ͼ�Ľ������: \n");
for (i = 1; i <= G.vexnum;i++)
{
	printf("[%c(%d)]", G.vertices[i].data, G.vertices[i].inDegree);
	p = G.vertices[i].link;
	while (p != NULL)
	{
		printf("���D->(%d %c)", p->adjvex, p->info);
		p = p->nextarc;
	}
	printf("\n");
}
}
void Toposort(ALGraph& G)
{
	int i, j, k;
	ArcNode* p;
	int qhead = 0;//qhead�����Ϊ0�Ķ���������ͷָ��
	int m = 0; // mָʾ����Ķ������
	for (i = 1; i <= G.vexnum; i++)//�������Ϊ0�Ķ�������
	{
		if (G.vertices[i].inDegree == 0)
		{
			G.vertices[i].inDegree = qhead;
			qhead = i;
			while (qhead != 0)
			{
				j = qhead;

				//��������ɾ�����Ϊ0�Ķ���,�������Ϊj
				qhead = G.vertices[i].inDegree;
				p = G.vertices[j].link;
				printf("%c ", j);//�������j������
				m++;
				while (p != NULL)
				{
					k = p->adjvex;


					// �Զ���k Ϊβ�Ļ�ͷ����ȼ�1
					G.vertices[k].inDegree = G.vertices[k].inDegree - 1;
					if (G.vertices[k].inDegree == 0)
					{
						G.vertices[k].inDegree = qhead;//�¶������������Ϊ0
						p = p->nextarc;//����һ����
					}
				}
			}
		}
	}
	if (m < G.vexnum)
		printf("�����л�!\n");//�������������n
}
int main()
{
	ALGraph G;
	printf("���������ͱ���:");
	scanf_s("%d %d", &G.vexnum, &G.arcnum);
	CreateGraph(G);
	Toposort(G);
	OutputGraph(G);
	return 0;
}
