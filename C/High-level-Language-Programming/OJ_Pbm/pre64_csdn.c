#include<stdio.h>
int main(){
	float x[3];  //记录不同的人的钱
	float y[3];  //记录不同的发票的钱
	int i,j,m;
	int num;//区分人
	char type;//区分发票
	float n=0.0;
	for (i = 0; i < 3; i++){
		x[i] = 0.0;
		y[i] = 0.0;
	}
	for (i = 0; i < 3; i++){
		scanf("%d", &num);
		
		if (num == 1){
			scanf("%d", &m);
			for (j = 0; j < m; j++){
 
			
				scanf(" %c", &type);//如果%c没有空格 调试时发现type是32 录入的是空格  
				if (type == 'A'){
					scanf("%f", &n);
					x[0] += n;
					y[0] += n;
				}
				else if (type == 'B'){
					scanf("%f", &n);
					x[0] += n;
					y[1] += n;
				}
				else{
					scanf("%f", &n);
					x[0] += n;
					y[2] += n;
				}
			}
		}
 
 			else if (num == 2){
				scanf("%d", &m);
				for (j = 0; j < m; j++){
					scanf(" %c", &type);
					if (type == 'A'){
						scanf("%f", &n);
						x[1] += n;
						y[0] += n;
					}
					else if (type == 'B'){
						scanf("%f", &n);
						x[1] += n;
						y[1] += n;
					}
					else{
						scanf("%f", &n);
						x[1] += n;
						y[2] += n;
					}
				}
			}
			else{
				scanf("%d", &m);
				for (j = 0; j < m; j++){
					scanf(" %c", &type);
					if (type == 'A'){
						scanf("%f", &n);
						x[2] += n;
						y[0] += n;
					}
					else if (type == 'B'){
						scanf("%f", &n);
						x[2] += n;
						y[1] += n;
					}
					else{
						scanf("%f", &n);
						x[2] += n;
						y[2] += n;
 
					}
				}
 
 
			}
		}
	printf("1 %.2f\n2 %.2f\n3 %.2f\n", x[0], x[1], x[2]);
	printf("A %.2f\nB %.2f\nC %.2f\n", y[0], y[1], y[2]);
	return 0;
}