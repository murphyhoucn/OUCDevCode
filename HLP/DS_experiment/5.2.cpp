#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//ͼ���ڽӱ�洢��ʾ-------
typedef struct ArcNode {
	int adjvex;
	char info;
	struct ArcNode* nextarc;
}ArcNode;
typedef struct Vnode {
	char data;
	ArcNode* link;
}Vnode, AdjList[MAX + 1];
typedef struct {
	AdjList vertices;
	int vexnum;
	int arcnum;
}ALGraph;
//ͼ���ڽӾ����ʾ
typedef struct {
	int n;
	char vexs[MAX + 1];
	int arcs[MAX + 1][MAX + 1];
}AdjMatrix;
void AdjListToAdjMatrix(AdjList g1, AdjMatrix& gm, int n) {
	int i, j;
	ArcNode* p;
	for (i = 1; i <= MAX; i++)
		for (j = 1; j <= MAX; j++)
			gm.arcs[i][j] = 0;
	for (i = 1; i <= n; i++) {
		p = g1[i].link;
		while (p != NULL) {
			gm.arcs[i][p->adjvex] = 1;
			p = p->nextarc;
		}
	}
}
void AdjMatrixToAdjList(AdjMatrix gm, AdjList& g1, int n) {
	int i, j;
	ArcNode* p;
	for (i = 1; i <= n; i++) {
		g1[i].data = 0;
		g1[i].link = NULL;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (gm.arcs[i][j] == 1) {
				p = (ArcNode*)malloc(sizeof(ArcNode));
				p->adjvex = j;
				p->nextarc = g1[i].link;
				g1[i].link = p;
			}
}
void CreateGraph(ALGraph& G) {
	int i, s, d;
	ArcNode* p;
	for (i = 1; i <= G.vexnum; i++) {
		getchar();
		printf("��%d�������Ϣ(char��):", i);
		scanf_s("%c", &G.vertices[i].data);
		G.vertices[i].link = NULL;
	}
	for (i = 1; i <= G.arcnum; i++) {
		printf("��%d����----�����ţ��յ����:", i);
		scanf_s("%d %d", &s, &d);
		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = d;
		p->info = G.vertices[d].data;
		p->nextarc = G.vertices[s].link;
		G.vertices[s].link = p;
	}

}
void OutputAdjList(ALGraph& G) {
	int i;
	ArcNode* p;
	printf("ͼ���ڽӱ�����:\n");
	for (i = 1; i <= G.vexnum; i++) {
		printf("[%c]", G.vertices[i].data);
		p = G.vertices[i].link;
		while (p != NULL) {
			printf("--->(%d %c)", p->adjvex, p->info);
			p = p->nextarc;
		}
		printf("\n");
	}
}
void OutputAdjMatrix(AdjMatrix gm, int n) {
	printf("ͼ���ڽӾ�������:\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			printf("%d", gm.arcs[i][j]);
		printf("\n");
	}
}
//��ȱ���ͼ��DFS�㷨ʵ��
void DFS(AdjList g, int v, int visited[]) {
	ArcNode* w;
	int i;
	printf("%d ", v);
	visited[v] = 1;
	w = g[v].link;
	while (w != NULL) {
		i = w->adjvex;
		if (visited[i] == 0) DFS(g, i, visited);
		w = w->nextarc;
	}
}
//������ȱ���ͼ��BFS�㷨ʵ��
void BFS(AdjList g, int v, int visited[]) {
	int qu[MAX], f = 0, r = 0;
	ArcNode* p;
	printf("%d ", v);
	visited[v] = 1;
	qu[0] = v;
	while (f <= r) {
		v = qu[f++];
		p = g[v].link;
		while (p != NULL) {
			v = p->adjvex;
			if (visited[v] == 0) {
				visited[v] = 1;
				printf("%d ", v);
				qu[++r] = v;
			}
			p = p->nextarc;
		}
	}
}
void Traver(AdjList g, int n, int id) {
	int i;
	static int visited[MAX];
	for (i = 1; i <= n; i++)
		visited[i] = 0;
	for (i = 1; i <= n; i++)
		if (visited[i] == 0) {
			if (id == 1) DFS(g, i, visited);
			if (id == 2) BFS(g, i, visited);
		}
}




void main() {
	ALGraph G;
	AdjMatrix gm;
	printf("���������ͱ���:");
	scanf_s("%d %d", &G.vexnum, &G.arcnum);
	CreateGraph(G);
	AdjListToAdjMatrix(G.vertices, gm, G.arcnum);
	OutputAdjList(G);
	OutputAdjMatrix(gm, G.vexnum);
}