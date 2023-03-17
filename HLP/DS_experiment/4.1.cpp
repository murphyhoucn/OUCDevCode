//#include<stdio.h>
//#define max 30
//
//void createtree(int *bt,int list[],int n)
//{
//	int i;
//	int level;
//	for(i=0;i<max;i++){
//		bt[i]=0;
//	}
//	bt[0]=list[0];
//	for(i=1;i<n;i++){
//		level=1;
//		while(bt[level]!=0){
//			if(list[i]<bt[level])
//				level=level*2;
//			else 
//				level=level*2+1;
//		}
//		bt[level]=list[i];
//	}
//}
//int main(){
//	int count,i;
//	int btree[max];
//	int nodelist[max];
//	
//	printf("input the number of elements(n<30):\n");
//	scanf_s("%d",&count);
//	printf("input elements:\n");
//	for(i=0;i<count;i++)
//		scanf_s("%d",&nodelist[i]);
//	createtree(btree,nodelist,count);
//	printf("the binary tree is:\n");
//	for(i=0;i<max;i++)
//		printf("%d ",btree[i]);
//	printf("\n");
//}
