//һ��������˫�ױ�ʾ���洢�����һ���㷨������������ȡ�

#include <stdio.h>
#include <stdlib.h>
#define TElemType char

#define MAX_TREE_SIZE 100

typedef struct PTNode  //���ṹ
{
	TElemType data;
	int parent;   //˫��λ����
}PTNode;

typedef struct   //���ṹ
{
	PTNode nodes[MAX_TREE_SIZE];
	int r, n;   //����λ�úͽ����
}PTree;



int main(void)
{

	int TreeDepth(PTree T);


	PTree PT;
	int count=0;

	PT.n = 10; PT.r = 0;
	PT.nodes[0].data = 'R'; PT.nodes[0].parent = -1;
	PT.nodes[1].data = 'A'; PT.nodes[1].parent = 0;
	PT.nodes[2].data = 'B'; PT.nodes[2].parent = 0;
	PT.nodes[3].data = 'C'; PT.nodes[3].parent = 0;
	PT.nodes[4].data = 'D'; PT.nodes[4].parent = 1;
	PT.nodes[5].data = 'E'; PT.nodes[5].parent = 1;
	PT.nodes[6].data = 'F'; PT.nodes[6].parent = 3;
	PT.nodes[7].data = 'G'; PT.nodes[7].parent = 6;
	PT.nodes[8].data = 'H'; PT.nodes[8].parent = 6;
	PT.nodes[9].data = 'K'; PT.nodes[9].parent = 6;

	count = TreeDepth(PT);
	printf("������ȣ�%d\n", count);
	return 0;
}

int TreeDepth(PTree T) 
{
	int i, j;
	int deep;
	int maxdeep = 0;
	for (i = 0; i < T.n; i++) 
	{
		deep = 0;
		for (j = i; j >= 0; j = T.nodes[j].parent) { deep++; }
		if (deep > maxdeep) { maxdeep = deep; }
	}
	return maxdeep;
}
