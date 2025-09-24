#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int fact = 1;
	int i = 1;
	for (i = 1; i <= n; i++) {      //for(i=n;i>1;i--){
		fact *= i;                      //fact*=i;
	}
	printf("%d!=%d",n, fact);
	return 0;
}