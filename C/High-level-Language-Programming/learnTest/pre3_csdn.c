#include<stdio.h>

void bubble(int *arraynum, int *arrayvalue, int nn){
	int temp = 0, flagnum = 0;
	int i, j;
	for (j = 0; j < nn; j++){
		for (i = 0; i < nn-j; i++){
			if (arrayvalue[i + 1] > arrayvalue[i]){
				//繁殖率交换顺序
				temp = arrayvalue[i+1];
				arrayvalue[i+1] = arrayvalue[i];
				arrayvalue[i] = temp;
				//繁殖率对应的培养皿编号也交换顺序
				temp = arraynum[i+1];
				arraynum[i+1] = arraynum[i];
				arraynum[i] = temp;
			}
		}
	}
}
int main(){
	int i;
	int num[100],value[100],value1[100],value2[100];
	int  n;
	int small = 0,big = 0,smallnum=0,bignum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d %d %d", &num[i], &value1[i],&value2[i]);
		value[i] = value2[i] / value1[i];
	}
	/*for (i = 0; i < n; i++){
		printf("%d %d %d %d\n", num[i], value1[i], value2[i],value[i]);
		
	}*/
	bubble(num, value,n);//从大到小冒泡排序
	big = value[0];
	small = value[n-1];
	//printf("最小值:%d\n", small);
	//printf("最大值:%d\n", big);
	for (i = 0; i < n; i++){
		if (value[i] - small < big - value[i]){
			smallnum++;
		}
		else{
			bignum++;
		}
	}
	printf("%d\n", bignum);
	for (i = 0; i < bignum; i++){
		printf("%d\n", num[i]);
	}
	
	printf("%d\n", smallnum);
	for (i = smallnum-1; i < n; i++){
		printf("%d\n", num[i]);
	}
 
	return 0;
}