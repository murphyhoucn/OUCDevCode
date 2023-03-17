// 这个算法题不会


#include <stdio.h>
// #include <cstdio>
int succedent[300];
int precedent[300];
int main() {
	int n, m;
	while (1) {
		scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
			break;
        for (int i = 0; i < n - 1; i++) {
			succedent[i] = i + 1;
			precedent[i + 1] = i;
		}
        succedent[n - 1] = 0;
        precedent[0] = n - 1;
        int current = 0;
        while (1) {
			for (int count = 0; count < m-1; count++)
				current = succedent[current];
			int pre = precedent[current];
			int suc = succedent[current];
            succedent[pre] = suc;
			precedent[suc] = pre;
			if (pre == suc) {
				printf("%d\n", pre+1);
				break;
			}
			current = suc;
		}
	}
	return 0;
}