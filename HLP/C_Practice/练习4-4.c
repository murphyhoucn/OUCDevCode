//²ÂÊı×ÖÓÎÏ·


#include <stdio.h>
int main()
{
	int number, n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d", &number, &n);

	do {
		scanf("%d", &inp);
		cnt++;
		if (inp < 0) {
			printf("game over\n");
			finished = 1;
		}
		else if(inp>number){
			printf("too big\n");
		}
		else if (inp < number) {
			printf("too small\n");
		}
		else {
			if (cnt == 1) {
				printf("bingo\n");
			}
			else if (cnt <= 3) {
				printf("lucky you\n");
			}
			else {
				printf("good guess\n");
			}
			finished = 1;
		}
		if (cnt == n) {
			if (finished == 0) {
				printf("game over\n");
				finished = 1;
			}
		}

	} while (finished == 0);
	return 0;

}