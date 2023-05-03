//#include<stdio.h>
//#include<stdlib.h>
//
//#ifndef BASE
//#define BASE
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//typedef int Status;
//#endif
//
//#define TElemType char
//void visit(TElemType e) {
//	printf("%c ", e);
//}
//#define MAX_TREE_SIZE 100
//
//typedef struct PTNode {
//	TElemType data;
//	int parent; //双亲的位置域
//}PTNode;
//typedef struct {
//	PTNode nodes[MAX_TREE_SIZE];
//	int r, n;
//}PTree;
//
///*----------------
// |6.64 求树的深度|
// ----------------*/
//int TreeDepth(PTree T) {
//	int i, j;
//	int dep;
//	int maxdep = 0;
//	for (i = 0; i < T.n; i++) { //遍历每个结点
//		dep = 0;
//		for (j = i; j >= 0; j = T.nodes[j].parent) dep++; //从该结点，往上找父亲-->得到深度
//		if (dep > maxdep) maxdep = dep;
//	}
//	return maxdep;
//}
//
//
//int main() {
//	PTree PT;
//	int cnt;
//
//	PT.n = 10; PT.r = 0;
//	PT.nodes[0].data = 'R'; PT.nodes[0].parent = -1;
//	PT.nodes[1].data = 'A'; PT.nodes[1].parent = 0;
//	PT.nodes[2].data = 'B'; PT.nodes[2].parent = 0;
//	PT.nodes[3].data = 'C'; PT.nodes[3].parent = 0;
//	PT.nodes[4].data = 'D'; PT.nodes[4].parent = 1;
//	PT.nodes[5].data = 'E'; PT.nodes[5].parent = 1;
//	PT.nodes[6].data = 'F'; PT.nodes[6].parent = 3;
//	PT.nodes[7].data = 'G'; PT.nodes[7].parent = 6;
//	PT.nodes[8].data = 'H'; PT.nodes[8].parent = 6;
//	PT.nodes[9].data = 'I'; PT.nodes[9].parent = 6;
//
//	cnt = TreeDepth(PT);
//	printf("树的深度：%d\n", cnt);
//	return 0;
//}
